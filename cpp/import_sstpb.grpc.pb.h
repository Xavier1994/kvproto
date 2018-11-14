// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: import_sstpb.proto
#ifndef GRPC_import_5fsstpb_2eproto__INCLUDED
#define GRPC_import_5fsstpb_2eproto__INCLUDED

#include "import_sstpb.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace import_sstpb {

// ImportSST provides a service to import a generated SST file to a region in TiKV.
//
// In order to import an SST file to a region, the user should:
// 1. Retrieve the meta of the region according to the SST file's range.
// 2. Upload the SST file to the servers where the region's peers locate in.
// 3. Issue an ingest request to the region's leader with the SST file's metadata.
//
// It's the user's responsibility to make sure that the SST file is uploaded to
// the servers where the region's peers locate in, before issue the ingest
// request to the region's leader. However, the region can be scheduled (so the
// location of the region's peers will be changed) or split/merged (so the range
// of the region will be changed), after the SST file is uploaded, but before
// the SST file is ingested. So, the region's epoch is provided in the SST
// file's metadata, to guarantee that the region's epoch must be the same
// between the SST file is uploaded and ingested later.
class ImportSST final {
 public:
  static constexpr char const* service_full_name() {
    return "import_sstpb.ImportSST";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Switch to normal/import mode.
    virtual ::grpc::Status SwitchMode(::grpc::ClientContext* context, const ::import_sstpb::SwitchModeRequest& request, ::import_sstpb::SwitchModeResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_sstpb::SwitchModeResponse>> AsyncSwitchMode(::grpc::ClientContext* context, const ::import_sstpb::SwitchModeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_sstpb::SwitchModeResponse>>(AsyncSwitchModeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_sstpb::SwitchModeResponse>> PrepareAsyncSwitchMode(::grpc::ClientContext* context, const ::import_sstpb::SwitchModeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_sstpb::SwitchModeResponse>>(PrepareAsyncSwitchModeRaw(context, request, cq));
    }
    // Upload an SST file to a server.
    std::unique_ptr< ::grpc::ClientWriterInterface< ::import_sstpb::UploadRequest>> Upload(::grpc::ClientContext* context, ::import_sstpb::UploadResponse* response) {
      return std::unique_ptr< ::grpc::ClientWriterInterface< ::import_sstpb::UploadRequest>>(UploadRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::import_sstpb::UploadRequest>> AsyncUpload(::grpc::ClientContext* context, ::import_sstpb::UploadResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::import_sstpb::UploadRequest>>(AsyncUploadRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::import_sstpb::UploadRequest>> PrepareAsyncUpload(::grpc::ClientContext* context, ::import_sstpb::UploadResponse* response, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::import_sstpb::UploadRequest>>(PrepareAsyncUploadRaw(context, response, cq));
    }
    // Ingest an uploaded SST file to a region.
    virtual ::grpc::Status Ingest(::grpc::ClientContext* context, const ::import_sstpb::IngestRequest& request, ::import_sstpb::IngestResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_sstpb::IngestResponse>> AsyncIngest(::grpc::ClientContext* context, const ::import_sstpb::IngestRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_sstpb::IngestResponse>>(AsyncIngestRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_sstpb::IngestResponse>> PrepareAsyncIngest(::grpc::ClientContext* context, const ::import_sstpb::IngestRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_sstpb::IngestResponse>>(PrepareAsyncIngestRaw(context, request, cq));
    }
    // Compact the specific range for better performance.
    virtual ::grpc::Status Compact(::grpc::ClientContext* context, const ::import_sstpb::CompactRequest& request, ::import_sstpb::CompactResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_sstpb::CompactResponse>> AsyncCompact(::grpc::ClientContext* context, const ::import_sstpb::CompactRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_sstpb::CompactResponse>>(AsyncCompactRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_sstpb::CompactResponse>> PrepareAsyncCompact(::grpc::ClientContext* context, const ::import_sstpb::CompactRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::import_sstpb::CompactResponse>>(PrepareAsyncCompactRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // Switch to normal/import mode.
      virtual void SwitchMode(::grpc::ClientContext* context, const ::import_sstpb::SwitchModeRequest* request, ::import_sstpb::SwitchModeResponse* response, std::function<void(::grpc::Status)>) = 0;
      // Upload an SST file to a server.
      // Ingest an uploaded SST file to a region.
      virtual void Ingest(::grpc::ClientContext* context, const ::import_sstpb::IngestRequest* request, ::import_sstpb::IngestResponse* response, std::function<void(::grpc::Status)>) = 0;
      // Compact the specific range for better performance.
      virtual void Compact(::grpc::ClientContext* context, const ::import_sstpb::CompactRequest* request, ::import_sstpb::CompactResponse* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::import_sstpb::SwitchModeResponse>* AsyncSwitchModeRaw(::grpc::ClientContext* context, const ::import_sstpb::SwitchModeRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::import_sstpb::SwitchModeResponse>* PrepareAsyncSwitchModeRaw(::grpc::ClientContext* context, const ::import_sstpb::SwitchModeRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientWriterInterface< ::import_sstpb::UploadRequest>* UploadRaw(::grpc::ClientContext* context, ::import_sstpb::UploadResponse* response) = 0;
    virtual ::grpc::ClientAsyncWriterInterface< ::import_sstpb::UploadRequest>* AsyncUploadRaw(::grpc::ClientContext* context, ::import_sstpb::UploadResponse* response, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncWriterInterface< ::import_sstpb::UploadRequest>* PrepareAsyncUploadRaw(::grpc::ClientContext* context, ::import_sstpb::UploadResponse* response, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::import_sstpb::IngestResponse>* AsyncIngestRaw(::grpc::ClientContext* context, const ::import_sstpb::IngestRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::import_sstpb::IngestResponse>* PrepareAsyncIngestRaw(::grpc::ClientContext* context, const ::import_sstpb::IngestRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::import_sstpb::CompactResponse>* AsyncCompactRaw(::grpc::ClientContext* context, const ::import_sstpb::CompactRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::import_sstpb::CompactResponse>* PrepareAsyncCompactRaw(::grpc::ClientContext* context, const ::import_sstpb::CompactRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status SwitchMode(::grpc::ClientContext* context, const ::import_sstpb::SwitchModeRequest& request, ::import_sstpb::SwitchModeResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_sstpb::SwitchModeResponse>> AsyncSwitchMode(::grpc::ClientContext* context, const ::import_sstpb::SwitchModeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_sstpb::SwitchModeResponse>>(AsyncSwitchModeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_sstpb::SwitchModeResponse>> PrepareAsyncSwitchMode(::grpc::ClientContext* context, const ::import_sstpb::SwitchModeRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_sstpb::SwitchModeResponse>>(PrepareAsyncSwitchModeRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientWriter< ::import_sstpb::UploadRequest>> Upload(::grpc::ClientContext* context, ::import_sstpb::UploadResponse* response) {
      return std::unique_ptr< ::grpc::ClientWriter< ::import_sstpb::UploadRequest>>(UploadRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriter< ::import_sstpb::UploadRequest>> AsyncUpload(::grpc::ClientContext* context, ::import_sstpb::UploadResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriter< ::import_sstpb::UploadRequest>>(AsyncUploadRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriter< ::import_sstpb::UploadRequest>> PrepareAsyncUpload(::grpc::ClientContext* context, ::import_sstpb::UploadResponse* response, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncWriter< ::import_sstpb::UploadRequest>>(PrepareAsyncUploadRaw(context, response, cq));
    }
    ::grpc::Status Ingest(::grpc::ClientContext* context, const ::import_sstpb::IngestRequest& request, ::import_sstpb::IngestResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_sstpb::IngestResponse>> AsyncIngest(::grpc::ClientContext* context, const ::import_sstpb::IngestRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_sstpb::IngestResponse>>(AsyncIngestRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_sstpb::IngestResponse>> PrepareAsyncIngest(::grpc::ClientContext* context, const ::import_sstpb::IngestRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_sstpb::IngestResponse>>(PrepareAsyncIngestRaw(context, request, cq));
    }
    ::grpc::Status Compact(::grpc::ClientContext* context, const ::import_sstpb::CompactRequest& request, ::import_sstpb::CompactResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_sstpb::CompactResponse>> AsyncCompact(::grpc::ClientContext* context, const ::import_sstpb::CompactRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_sstpb::CompactResponse>>(AsyncCompactRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_sstpb::CompactResponse>> PrepareAsyncCompact(::grpc::ClientContext* context, const ::import_sstpb::CompactRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::import_sstpb::CompactResponse>>(PrepareAsyncCompactRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void SwitchMode(::grpc::ClientContext* context, const ::import_sstpb::SwitchModeRequest* request, ::import_sstpb::SwitchModeResponse* response, std::function<void(::grpc::Status)>) override;
      void Ingest(::grpc::ClientContext* context, const ::import_sstpb::IngestRequest* request, ::import_sstpb::IngestResponse* response, std::function<void(::grpc::Status)>) override;
      void Compact(::grpc::ClientContext* context, const ::import_sstpb::CompactRequest* request, ::import_sstpb::CompactResponse* response, std::function<void(::grpc::Status)>) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::import_sstpb::SwitchModeResponse>* AsyncSwitchModeRaw(::grpc::ClientContext* context, const ::import_sstpb::SwitchModeRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::import_sstpb::SwitchModeResponse>* PrepareAsyncSwitchModeRaw(::grpc::ClientContext* context, const ::import_sstpb::SwitchModeRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientWriter< ::import_sstpb::UploadRequest>* UploadRaw(::grpc::ClientContext* context, ::import_sstpb::UploadResponse* response) override;
    ::grpc::ClientAsyncWriter< ::import_sstpb::UploadRequest>* AsyncUploadRaw(::grpc::ClientContext* context, ::import_sstpb::UploadResponse* response, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncWriter< ::import_sstpb::UploadRequest>* PrepareAsyncUploadRaw(::grpc::ClientContext* context, ::import_sstpb::UploadResponse* response, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::import_sstpb::IngestResponse>* AsyncIngestRaw(::grpc::ClientContext* context, const ::import_sstpb::IngestRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::import_sstpb::IngestResponse>* PrepareAsyncIngestRaw(::grpc::ClientContext* context, const ::import_sstpb::IngestRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::import_sstpb::CompactResponse>* AsyncCompactRaw(::grpc::ClientContext* context, const ::import_sstpb::CompactRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::import_sstpb::CompactResponse>* PrepareAsyncCompactRaw(::grpc::ClientContext* context, const ::import_sstpb::CompactRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_SwitchMode_;
    const ::grpc::internal::RpcMethod rpcmethod_Upload_;
    const ::grpc::internal::RpcMethod rpcmethod_Ingest_;
    const ::grpc::internal::RpcMethod rpcmethod_Compact_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Switch to normal/import mode.
    virtual ::grpc::Status SwitchMode(::grpc::ServerContext* context, const ::import_sstpb::SwitchModeRequest* request, ::import_sstpb::SwitchModeResponse* response);
    // Upload an SST file to a server.
    virtual ::grpc::Status Upload(::grpc::ServerContext* context, ::grpc::ServerReader< ::import_sstpb::UploadRequest>* reader, ::import_sstpb::UploadResponse* response);
    // Ingest an uploaded SST file to a region.
    virtual ::grpc::Status Ingest(::grpc::ServerContext* context, const ::import_sstpb::IngestRequest* request, ::import_sstpb::IngestResponse* response);
    // Compact the specific range for better performance.
    virtual ::grpc::Status Compact(::grpc::ServerContext* context, const ::import_sstpb::CompactRequest* request, ::import_sstpb::CompactResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SwitchMode : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SwitchMode() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SwitchMode() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SwitchMode(::grpc::ServerContext* context, const ::import_sstpb::SwitchModeRequest* request, ::import_sstpb::SwitchModeResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSwitchMode(::grpc::ServerContext* context, ::import_sstpb::SwitchModeRequest* request, ::grpc::ServerAsyncResponseWriter< ::import_sstpb::SwitchModeResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Upload : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Upload() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_Upload() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Upload(::grpc::ServerContext* context, ::grpc::ServerReader< ::import_sstpb::UploadRequest>* reader, ::import_sstpb::UploadResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUpload(::grpc::ServerContext* context, ::grpc::ServerAsyncReader< ::import_sstpb::UploadResponse, ::import_sstpb::UploadRequest>* reader, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncClientStreaming(1, context, reader, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Ingest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Ingest() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_Ingest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Ingest(::grpc::ServerContext* context, const ::import_sstpb::IngestRequest* request, ::import_sstpb::IngestResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestIngest(::grpc::ServerContext* context, ::import_sstpb::IngestRequest* request, ::grpc::ServerAsyncResponseWriter< ::import_sstpb::IngestResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Compact : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Compact() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_Compact() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Compact(::grpc::ServerContext* context, const ::import_sstpb::CompactRequest* request, ::import_sstpb::CompactResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCompact(::grpc::ServerContext* context, ::import_sstpb::CompactRequest* request, ::grpc::ServerAsyncResponseWriter< ::import_sstpb::CompactResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SwitchMode<WithAsyncMethod_Upload<WithAsyncMethod_Ingest<WithAsyncMethod_Compact<Service > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_SwitchMode : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SwitchMode() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SwitchMode() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SwitchMode(::grpc::ServerContext* context, const ::import_sstpb::SwitchModeRequest* request, ::import_sstpb::SwitchModeResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Upload : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Upload() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_Upload() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Upload(::grpc::ServerContext* context, ::grpc::ServerReader< ::import_sstpb::UploadRequest>* reader, ::import_sstpb::UploadResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Ingest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Ingest() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_Ingest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Ingest(::grpc::ServerContext* context, const ::import_sstpb::IngestRequest* request, ::import_sstpb::IngestResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Compact : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Compact() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_Compact() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Compact(::grpc::ServerContext* context, const ::import_sstpb::CompactRequest* request, ::import_sstpb::CompactResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_SwitchMode : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_SwitchMode() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_SwitchMode() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SwitchMode(::grpc::ServerContext* context, const ::import_sstpb::SwitchModeRequest* request, ::import_sstpb::SwitchModeResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSwitchMode(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Upload : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_Upload() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_Upload() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Upload(::grpc::ServerContext* context, ::grpc::ServerReader< ::import_sstpb::UploadRequest>* reader, ::import_sstpb::UploadResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestUpload(::grpc::ServerContext* context, ::grpc::ServerAsyncReader< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* reader, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncClientStreaming(1, context, reader, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Ingest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_Ingest() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_Ingest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Ingest(::grpc::ServerContext* context, const ::import_sstpb::IngestRequest* request, ::import_sstpb::IngestResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestIngest(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Compact : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_Compact() {
      ::grpc::Service::MarkMethodRaw(3);
    }
    ~WithRawMethod_Compact() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Compact(::grpc::ServerContext* context, const ::import_sstpb::CompactRequest* request, ::import_sstpb::CompactResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCompact(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SwitchMode : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_SwitchMode() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::import_sstpb::SwitchModeRequest, ::import_sstpb::SwitchModeResponse>(std::bind(&WithStreamedUnaryMethod_SwitchMode<BaseClass>::StreamedSwitchMode, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_SwitchMode() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SwitchMode(::grpc::ServerContext* context, const ::import_sstpb::SwitchModeRequest* request, ::import_sstpb::SwitchModeResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSwitchMode(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::import_sstpb::SwitchModeRequest,::import_sstpb::SwitchModeResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Ingest : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Ingest() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler< ::import_sstpb::IngestRequest, ::import_sstpb::IngestResponse>(std::bind(&WithStreamedUnaryMethod_Ingest<BaseClass>::StreamedIngest, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Ingest() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Ingest(::grpc::ServerContext* context, const ::import_sstpb::IngestRequest* request, ::import_sstpb::IngestResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedIngest(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::import_sstpb::IngestRequest,::import_sstpb::IngestResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Compact : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Compact() {
      ::grpc::Service::MarkMethodStreamed(3,
        new ::grpc::internal::StreamedUnaryHandler< ::import_sstpb::CompactRequest, ::import_sstpb::CompactResponse>(std::bind(&WithStreamedUnaryMethod_Compact<BaseClass>::StreamedCompact, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Compact() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Compact(::grpc::ServerContext* context, const ::import_sstpb::CompactRequest* request, ::import_sstpb::CompactResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCompact(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::import_sstpb::CompactRequest,::import_sstpb::CompactResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_SwitchMode<WithStreamedUnaryMethod_Ingest<WithStreamedUnaryMethod_Compact<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_SwitchMode<WithStreamedUnaryMethod_Ingest<WithStreamedUnaryMethod_Compact<Service > > > StreamedService;
};

}  // namespace import_sstpb


#endif  // GRPC_import_5fsstpb_2eproto__INCLUDED
