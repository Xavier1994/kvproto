// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gogo.proto

#include "gogo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace gogoproto {
}  // namespace gogoproto
namespace protobuf_gogo_2eproto {
void InitDefaults() {
}

const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gogo.proto", schemas, file_default_instances, TableStruct::offsets,
      NULL, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\ngogo.proto\022\tgogoproto\032 google/protobuf"
      "/descriptor.proto:;\n\023goproto_enum_prefix"
      "\022\034.google.protobuf.EnumOptions\030\261\344\003 \001(\010:="
      "\n\025goproto_enum_stringer\022\034.google.protobu"
      "f.EnumOptions\030\305\344\003 \001(\010:5\n\renum_stringer\022\034"
      ".google.protobuf.EnumOptions\030\306\344\003 \001(\010:7\n\017"
      "enum_customname\022\034.google.protobuf.EnumOp"
      "tions\030\307\344\003 \001(\t:0\n\010enumdecl\022\034.google.proto"
      "buf.EnumOptions\030\310\344\003 \001(\010:A\n\024enumvalue_cus"
      "tomname\022!.google.protobuf.EnumValueOptio"
      "ns\030\321\203\004 \001(\t:;\n\023goproto_getters_all\022\034.goog"
      "le.protobuf.FileOptions\030\231\354\003 \001(\010:\?\n\027gopro"
      "to_enum_prefix_all\022\034.google.protobuf.Fil"
      "eOptions\030\232\354\003 \001(\010:<\n\024goproto_stringer_all"
      "\022\034.google.protobuf.FileOptions\030\233\354\003 \001(\010:9"
      "\n\021verbose_equal_all\022\034.google.protobuf.Fi"
      "leOptions\030\234\354\003 \001(\010:0\n\010face_all\022\034.google.p"
      "rotobuf.FileOptions\030\235\354\003 \001(\010:4\n\014gostring_"
      "all\022\034.google.protobuf.FileOptions\030\236\354\003 \001("
      "\010:4\n\014populate_all\022\034.google.protobuf.File"
      "Options\030\237\354\003 \001(\010:4\n\014stringer_all\022\034.google"
      ".protobuf.FileOptions\030\240\354\003 \001(\010:3\n\013onlyone"
      "_all\022\034.google.protobuf.FileOptions\030\241\354\003 \001"
      "(\010:1\n\tequal_all\022\034.google.protobuf.FileOp"
      "tions\030\245\354\003 \001(\010:7\n\017description_all\022\034.googl"
      "e.protobuf.FileOptions\030\246\354\003 \001(\010:3\n\013testge"
      "n_all\022\034.google.protobuf.FileOptions\030\247\354\003 "
      "\001(\010:4\n\014benchgen_all\022\034.google.protobuf.Fi"
      "leOptions\030\250\354\003 \001(\010:5\n\rmarshaler_all\022\034.goo"
      "gle.protobuf.FileOptions\030\251\354\003 \001(\010:7\n\017unma"
      "rshaler_all\022\034.google.protobuf.FileOption"
      "s\030\252\354\003 \001(\010:<\n\024stable_marshaler_all\022\034.goog"
      "le.protobuf.FileOptions\030\253\354\003 \001(\010:1\n\tsizer"
      "_all\022\034.google.protobuf.FileOptions\030\254\354\003 \001"
      "(\010:A\n\031goproto_enum_stringer_all\022\034.google"
      ".protobuf.FileOptions\030\255\354\003 \001(\010:9\n\021enum_st"
      "ringer_all\022\034.google.protobuf.FileOptions"
      "\030\256\354\003 \001(\010:<\n\024unsafe_marshaler_all\022\034.googl"
      "e.protobuf.FileOptions\030\257\354\003 \001(\010:>\n\026unsafe"
      "_unmarshaler_all\022\034.google.protobuf.FileO"
      "ptions\030\260\354\003 \001(\010:B\n\032goproto_extensions_map"
      "_all\022\034.google.protobuf.FileOptions\030\261\354\003 \001"
      "(\010:@\n\030goproto_unrecognized_all\022\034.google."
      "protobuf.FileOptions\030\262\354\003 \001(\010:8\n\020gogoprot"
      "o_import\022\034.google.protobuf.FileOptions\030\263"
      "\354\003 \001(\010:6\n\016protosizer_all\022\034.google.protob"
      "uf.FileOptions\030\264\354\003 \001(\010:3\n\013compare_all\022\034."
      "google.protobuf.FileOptions\030\265\354\003 \001(\010:4\n\014t"
      "ypedecl_all\022\034.google.protobuf.FileOption"
      "s\030\266\354\003 \001(\010:4\n\014enumdecl_all\022\034.google.proto"
      "buf.FileOptions\030\267\354\003 \001(\010:<\n\024goproto_regis"
      "tration\022\034.google.protobuf.FileOptions\030\270\354"
      "\003 \001(\010:7\n\017messagename_all\022\034.google.protob"
      "uf.FileOptions\030\271\354\003 \001(\010:=\n\025goproto_sizeca"
      "che_all\022\034.google.protobuf.FileOptions\030\272\354"
      "\003 \001(\010:;\n\023goproto_unkeyed_all\022\034.google.pr"
      "otobuf.FileOptions\030\273\354\003 \001(\010::\n\017goproto_ge"
      "tters\022\037.google.protobuf.MessageOptions\030\201"
      "\364\003 \001(\010:;\n\020goproto_stringer\022\037.google.prot"
      "obuf.MessageOptions\030\203\364\003 \001(\010:8\n\rverbose_e"
      "qual\022\037.google.protobuf.MessageOptions\030\204\364"
      "\003 \001(\010:/\n\004face\022\037.google.protobuf.MessageO"
      "ptions\030\205\364\003 \001(\010:3\n\010gostring\022\037.google.prot"
      "obuf.MessageOptions\030\206\364\003 \001(\010:3\n\010populate\022"
      "\037.google.protobuf.MessageOptions\030\207\364\003 \001(\010"
      ":3\n\010stringer\022\037.google.protobuf.MessageOp"
      "tions\030\300\213\004 \001(\010:2\n\007onlyone\022\037.google.protob"
      "uf.MessageOptions\030\211\364\003 \001(\010:0\n\005equal\022\037.goo"
      "gle.protobuf.MessageOptions\030\215\364\003 \001(\010:6\n\013d"
      "escription\022\037.google.protobuf.MessageOpti"
      "ons\030\216\364\003 \001(\010:2\n\007testgen\022\037.google.protobuf"
      ".MessageOptions\030\217\364\003 \001(\010:3\n\010benchgen\022\037.go"
      "ogle.protobuf.MessageOptions\030\220\364\003 \001(\010:4\n\t"
      "marshaler\022\037.google.protobuf.MessageOptio"
      "ns\030\221\364\003 \001(\010:6\n\013unmarshaler\022\037.google.proto"
      "buf.MessageOptions\030\222\364\003 \001(\010:;\n\020stable_mar"
      "shaler\022\037.google.protobuf.MessageOptions\030"
      "\223\364\003 \001(\010:0\n\005sizer\022\037.google.protobuf.Messa"
      "geOptions\030\224\364\003 \001(\010:;\n\020unsafe_marshaler\022\037."
      "google.protobuf.MessageOptions\030\227\364\003 \001(\010:="
      "\n\022unsafe_unmarshaler\022\037.google.protobuf.M"
      "essageOptions\030\230\364\003 \001(\010:A\n\026goproto_extensi"
      "ons_map\022\037.google.protobuf.MessageOptions"
      "\030\231\364\003 \001(\010:\?\n\024goproto_unrecognized\022\037.googl"
      "e.protobuf.MessageOptions\030\232\364\003 \001(\010:5\n\npro"
      "tosizer\022\037.google.protobuf.MessageOptions"
      "\030\234\364\003 \001(\010:2\n\007compare\022\037.google.protobuf.Me"
      "ssageOptions\030\235\364\003 \001(\010:3\n\010typedecl\022\037.googl"
      "e.protobuf.MessageOptions\030\236\364\003 \001(\010:6\n\013mes"
      "sagename\022\037.google.protobuf.MessageOption"
      "s\030\241\364\003 \001(\010:<\n\021goproto_sizecache\022\037.google."
      "protobuf.MessageOptions\030\242\364\003 \001(\010::\n\017gopro"
      "to_unkeyed\022\037.google.protobuf.MessageOpti"
      "ons\030\243\364\003 \001(\010:1\n\010nullable\022\035.google.protobu"
      "f.FieldOptions\030\351\373\003 \001(\010:.\n\005embed\022\035.google"
      ".protobuf.FieldOptions\030\352\373\003 \001(\010:3\n\ncustom"
      "type\022\035.google.protobuf.FieldOptions\030\353\373\003 "
      "\001(\t:3\n\ncustomname\022\035.google.protobuf.Fiel"
      "dOptions\030\354\373\003 \001(\t:0\n\007jsontag\022\035.google.pro"
      "tobuf.FieldOptions\030\355\373\003 \001(\t:1\n\010moretags\022\035"
      ".google.protobuf.FieldOptions\030\356\373\003 \001(\t:1\n"
      "\010casttype\022\035.google.protobuf.FieldOptions"
      "\030\357\373\003 \001(\t:0\n\007castkey\022\035.google.protobuf.Fi"
      "eldOptions\030\360\373\003 \001(\t:2\n\tcastvalue\022\035.google"
      ".protobuf.FieldOptions\030\361\373\003 \001(\t:0\n\007stdtim"
      "e\022\035.google.protobuf.FieldOptions\030\362\373\003 \001(\010"
      ":4\n\013stdduration\022\035.google.protobuf.FieldO"
      "ptions\030\363\373\003 \001(\010BE\n\023com.google.protobufB\nG"
      "oGoProtosZ\"github.com/gogo/protobuf/gogo"
      "proto"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 4365);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gogo.proto", &protobuf_RegisterTypes);
  ::protobuf_google_2fprotobuf_2fdescriptor_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_gogo_2eproto
namespace gogoproto {
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_prefix(kGoprotoEnumPrefixFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_stringer(kGoprotoEnumStringerFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  enum_stringer(kEnumStringerFieldNumber, false);
const ::std::string enum_customname_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  enum_customname(kEnumCustomnameFieldNumber, enum_customname_default);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  enumdecl(kEnumdeclFieldNumber, false);
const ::std::string enumvalue_customname_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  enumvalue_customname(kEnumvalueCustomnameFieldNumber, enumvalue_customname_default);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_getters_all(kGoprotoGettersAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_prefix_all(kGoprotoEnumPrefixAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_stringer_all(kGoprotoStringerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  verbose_equal_all(kVerboseEqualAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  face_all(kFaceAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  gostring_all(kGostringAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  populate_all(kPopulateAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  stringer_all(kStringerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  onlyone_all(kOnlyoneAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  equal_all(kEqualAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  description_all(kDescriptionAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  testgen_all(kTestgenAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  benchgen_all(kBenchgenAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  marshaler_all(kMarshalerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  unmarshaler_all(kUnmarshalerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  stable_marshaler_all(kStableMarshalerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  sizer_all(kSizerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_enum_stringer_all(kGoprotoEnumStringerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  enum_stringer_all(kEnumStringerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_marshaler_all(kUnsafeMarshalerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_unmarshaler_all(kUnsafeUnmarshalerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_extensions_map_all(kGoprotoExtensionsMapAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_unrecognized_all(kGoprotoUnrecognizedAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  gogoproto_import(kGogoprotoImportFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  protosizer_all(kProtosizerAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  compare_all(kCompareAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  typedecl_all(kTypedeclAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  enumdecl_all(kEnumdeclAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_registration(kGoprotoRegistrationFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  messagename_all(kMessagenameAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_sizecache_all(kGoprotoSizecacheAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_unkeyed_all(kGoprotoUnkeyedAllFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_getters(kGoprotoGettersFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_stringer(kGoprotoStringerFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  verbose_equal(kVerboseEqualFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  face(kFaceFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  gostring(kGostringFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  populate(kPopulateFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  stringer(kStringerFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  onlyone(kOnlyoneFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  equal(kEqualFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  description(kDescriptionFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  testgen(kTestgenFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  benchgen(kBenchgenFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  marshaler(kMarshalerFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  unmarshaler(kUnmarshalerFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  stable_marshaler(kStableMarshalerFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  sizer(kSizerFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_marshaler(kUnsafeMarshalerFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  unsafe_unmarshaler(kUnsafeUnmarshalerFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_extensions_map(kGoprotoExtensionsMapFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_unrecognized(kGoprotoUnrecognizedFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  protosizer(kProtosizerFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  compare(kCompareFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  typedecl(kTypedeclFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  messagename(kMessagenameFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_sizecache(kGoprotoSizecacheFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::MessageOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  goproto_unkeyed(kGoprotoUnkeyedFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  nullable(kNullableFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  embed(kEmbedFieldNumber, false);
const ::std::string customtype_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  customtype(kCustomtypeFieldNumber, customtype_default);
const ::std::string customname_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  customname(kCustomnameFieldNumber, customname_default);
const ::std::string jsontag_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  jsontag(kJsontagFieldNumber, jsontag_default);
const ::std::string moretags_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  moretags(kMoretagsFieldNumber, moretags_default);
const ::std::string casttype_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  casttype(kCasttypeFieldNumber, casttype_default);
const ::std::string castkey_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  castkey(kCastkeyFieldNumber, castkey_default);
const ::std::string castvalue_default("");
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::StringTypeTraits, 9, false >
  castvalue(kCastvalueFieldNumber, castvalue_default);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  stdtime(kStdtimeFieldNumber, false);
::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FieldOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  stdduration(kStddurationFieldNumber, false);

// @@protoc_insertion_point(namespace_scope)
}  // namespace gogoproto
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
