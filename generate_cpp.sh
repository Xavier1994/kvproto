#!/bin/bash

. ./common.sh

mkdir cpp

if ! check_protoc_version; then
	exit 1
fi

if ! cmd_exists grpc_cpp_plugin; then
    echo "missing grpc_cpp_plugin"
    exit 1
fi

protoc -I include --grpc_out=cpp --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` --cpp_out=cpp  include/eraftpb.proto

push proto
echo "generate cpp code..."
gogo_protobuf_url=github.com/gogo/protobuf
GOGO_ROOT=${GOPATH}/src/github.com/gogo/protobuf
GO_INSTALL='go install'

echo "install gogoproto code/generator ..."
${GO_INSTALL} ${gogo_protobuf_url}/proto
${GO_INSTALL} ${gogo_protobuf_url}/protoc-gen-gofast
${GO_INSTALL} ${gogo_protobuf_url}/gogoproto

# add the bin path of gogoproto generator into PATH if it's missing
if ! cmd_exists protoc-gen-gofast; then
    for path in $(echo "${GOPATH}" | sed -e 's/:/ /g'); do
        gogo_proto_bin="${path}/bin/protoc-gen-gofast"
        if [ -e "${gogo_proto_bin}" ]; then
            export PATH=$(dirname "${gogo_proto_bin}"):$PATH
            break
        fi
    done
fi


protoc -I.:${GOGO_ROOT}:${GOGO_ROOT}/protobuf:../include --cpp_out ../cpp *.proto || exit $?
protoc -I.:${GOGO_ROOT}:${GOGO_ROOT}/protobuf:../include --grpc_out ../cpp --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` *.proto || exit $?
pop

pop

pushd cpp
find | xargs -t -i sed -i  's/gogoproto\/gogo.pb.h/gogo.pb.h/g' {}
find | xargs -t -i  sed -i 's/protobuf_gogoproto_2fgogo_2eproto/protobuf_gogo_2eproto/g' {}
popd
