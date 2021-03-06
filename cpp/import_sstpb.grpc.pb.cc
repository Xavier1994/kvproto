// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: import_sstpb.proto

#include "import_sstpb.pb.h"
#include "import_sstpb.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace import_sstpb {

static const char* ImportSST_method_names[] = {
  "/import_sstpb.ImportSST/SwitchMode",
  "/import_sstpb.ImportSST/Upload",
  "/import_sstpb.ImportSST/Ingest",
  "/import_sstpb.ImportSST/Compact",
};

std::unique_ptr< ImportSST::Stub> ImportSST::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< ImportSST::Stub> stub(new ImportSST::Stub(channel));
  return stub;
}

ImportSST::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SwitchMode_(ImportSST_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Upload_(ImportSST_method_names[1], ::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  , rpcmethod_Ingest_(ImportSST_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Compact_(ImportSST_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status ImportSST::Stub::SwitchMode(::grpc::ClientContext* context, const ::import_sstpb::SwitchModeRequest& request, ::import_sstpb::SwitchModeResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SwitchMode_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::import_sstpb::SwitchModeResponse>* ImportSST::Stub::AsyncSwitchModeRaw(::grpc::ClientContext* context, const ::import_sstpb::SwitchModeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::import_sstpb::SwitchModeResponse>::Create(channel_.get(), cq, rpcmethod_SwitchMode_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::import_sstpb::SwitchModeResponse>* ImportSST::Stub::PrepareAsyncSwitchModeRaw(::grpc::ClientContext* context, const ::import_sstpb::SwitchModeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::import_sstpb::SwitchModeResponse>::Create(channel_.get(), cq, rpcmethod_SwitchMode_, context, request, false);
}

::grpc::ClientWriter< ::import_sstpb::UploadRequest>* ImportSST::Stub::UploadRaw(::grpc::ClientContext* context, ::import_sstpb::UploadResponse* response) {
  return ::grpc::internal::ClientWriterFactory< ::import_sstpb::UploadRequest>::Create(channel_.get(), rpcmethod_Upload_, context, response);
}

::grpc::ClientAsyncWriter< ::import_sstpb::UploadRequest>* ImportSST::Stub::AsyncUploadRaw(::grpc::ClientContext* context, ::import_sstpb::UploadResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::import_sstpb::UploadRequest>::Create(channel_.get(), cq, rpcmethod_Upload_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::import_sstpb::UploadRequest>* ImportSST::Stub::PrepareAsyncUploadRaw(::grpc::ClientContext* context, ::import_sstpb::UploadResponse* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::import_sstpb::UploadRequest>::Create(channel_.get(), cq, rpcmethod_Upload_, context, response, false, nullptr);
}

::grpc::Status ImportSST::Stub::Ingest(::grpc::ClientContext* context, const ::import_sstpb::IngestRequest& request, ::import_sstpb::IngestResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Ingest_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::import_sstpb::IngestResponse>* ImportSST::Stub::AsyncIngestRaw(::grpc::ClientContext* context, const ::import_sstpb::IngestRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::import_sstpb::IngestResponse>::Create(channel_.get(), cq, rpcmethod_Ingest_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::import_sstpb::IngestResponse>* ImportSST::Stub::PrepareAsyncIngestRaw(::grpc::ClientContext* context, const ::import_sstpb::IngestRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::import_sstpb::IngestResponse>::Create(channel_.get(), cq, rpcmethod_Ingest_, context, request, false);
}

::grpc::Status ImportSST::Stub::Compact(::grpc::ClientContext* context, const ::import_sstpb::CompactRequest& request, ::import_sstpb::CompactResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Compact_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::import_sstpb::CompactResponse>* ImportSST::Stub::AsyncCompactRaw(::grpc::ClientContext* context, const ::import_sstpb::CompactRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::import_sstpb::CompactResponse>::Create(channel_.get(), cq, rpcmethod_Compact_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::import_sstpb::CompactResponse>* ImportSST::Stub::PrepareAsyncCompactRaw(::grpc::ClientContext* context, const ::import_sstpb::CompactRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::import_sstpb::CompactResponse>::Create(channel_.get(), cq, rpcmethod_Compact_, context, request, false);
}

ImportSST::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ImportSST_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ImportSST::Service, ::import_sstpb::SwitchModeRequest, ::import_sstpb::SwitchModeResponse>(
          std::mem_fn(&ImportSST::Service::SwitchMode), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ImportSST_method_names[1],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< ImportSST::Service, ::import_sstpb::UploadRequest, ::import_sstpb::UploadResponse>(
          std::mem_fn(&ImportSST::Service::Upload), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ImportSST_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ImportSST::Service, ::import_sstpb::IngestRequest, ::import_sstpb::IngestResponse>(
          std::mem_fn(&ImportSST::Service::Ingest), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      ImportSST_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< ImportSST::Service, ::import_sstpb::CompactRequest, ::import_sstpb::CompactResponse>(
          std::mem_fn(&ImportSST::Service::Compact), this)));
}

ImportSST::Service::~Service() {
}

::grpc::Status ImportSST::Service::SwitchMode(::grpc::ServerContext* context, const ::import_sstpb::SwitchModeRequest* request, ::import_sstpb::SwitchModeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ImportSST::Service::Upload(::grpc::ServerContext* context, ::grpc::ServerReader< ::import_sstpb::UploadRequest>* reader, ::import_sstpb::UploadResponse* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ImportSST::Service::Ingest(::grpc::ServerContext* context, const ::import_sstpb::IngestRequest* request, ::import_sstpb::IngestResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status ImportSST::Service::Compact(::grpc::ServerContext* context, const ::import_sstpb::CompactRequest* request, ::import_sstpb::CompactResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace import_sstpb

