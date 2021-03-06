// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_FILEWRITE_MBTOOL_DAEMON_V3_H_
#define FLATBUFFERS_GENERATED_FILEWRITE_MBTOOL_DAEMON_V3_H_

#include "flatbuffers/flatbuffers.h"

namespace mbtool {
namespace daemon {
namespace v3 {

struct FileWriteError;

struct FileWriteRequest;

struct FileWriteResponse;

struct FileWriteError FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ERRNO_VALUE = 4,
    VT_MSG = 6
  };
  int32_t errno_value() const {
    return GetField<int32_t>(VT_ERRNO_VALUE, 0);
  }
  const flatbuffers::String *msg() const {
    return GetPointer<const flatbuffers::String *>(VT_MSG);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ERRNO_VALUE) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_MSG) &&
           verifier.Verify(msg()) &&
           verifier.EndTable();
  }
};

struct FileWriteErrorBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_errno_value(int32_t errno_value) {
    fbb_.AddElement<int32_t>(FileWriteError::VT_ERRNO_VALUE, errno_value, 0);
  }
  void add_msg(flatbuffers::Offset<flatbuffers::String> msg) {
    fbb_.AddOffset(FileWriteError::VT_MSG, msg);
  }
  FileWriteErrorBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FileWriteErrorBuilder &operator=(const FileWriteErrorBuilder &);
  flatbuffers::Offset<FileWriteError> Finish() {
    const auto end = fbb_.EndTable(start_, 2);
    auto o = flatbuffers::Offset<FileWriteError>(end);
    return o;
  }
};

inline flatbuffers::Offset<FileWriteError> CreateFileWriteError(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t errno_value = 0,
    flatbuffers::Offset<flatbuffers::String> msg = 0) {
  FileWriteErrorBuilder builder_(_fbb);
  builder_.add_msg(msg);
  builder_.add_errno_value(errno_value);
  return builder_.Finish();
}

inline flatbuffers::Offset<FileWriteError> CreateFileWriteErrorDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t errno_value = 0,
    const char *msg = nullptr) {
  return mbtool::daemon::v3::CreateFileWriteError(
      _fbb,
      errno_value,
      msg ? _fbb.CreateString(msg) : 0);
}

struct FileWriteRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ID = 4,
    VT_DATA = 6
  };
  int32_t id() const {
    return GetField<int32_t>(VT_ID, 0);
  }
  const flatbuffers::Vector<uint8_t> *data() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_DATA);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ID) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_DATA) &&
           verifier.Verify(data()) &&
           verifier.EndTable();
  }
};

struct FileWriteRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_id(int32_t id) {
    fbb_.AddElement<int32_t>(FileWriteRequest::VT_ID, id, 0);
  }
  void add_data(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> data) {
    fbb_.AddOffset(FileWriteRequest::VT_DATA, data);
  }
  FileWriteRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FileWriteRequestBuilder &operator=(const FileWriteRequestBuilder &);
  flatbuffers::Offset<FileWriteRequest> Finish() {
    const auto end = fbb_.EndTable(start_, 2);
    auto o = flatbuffers::Offset<FileWriteRequest>(end);
    return o;
  }
};

inline flatbuffers::Offset<FileWriteRequest> CreateFileWriteRequest(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> data = 0) {
  FileWriteRequestBuilder builder_(_fbb);
  builder_.add_data(data);
  builder_.add_id(id);
  return builder_.Finish();
}

inline flatbuffers::Offset<FileWriteRequest> CreateFileWriteRequestDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t id = 0,
    const std::vector<uint8_t> *data = nullptr) {
  return mbtool::daemon::v3::CreateFileWriteRequest(
      _fbb,
      id,
      data ? _fbb.CreateVector<uint8_t>(*data) : 0);
}

struct FileWriteResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SUCCESS = 4,
    VT_ERROR_MSG = 6,
    VT_BYTES_WRITTEN = 8,
    VT_ERROR = 10
  };
  bool success() const {
    return GetField<uint8_t>(VT_SUCCESS, 0) != 0;
  }
  const flatbuffers::String *error_msg() const {
    return GetPointer<const flatbuffers::String *>(VT_ERROR_MSG);
  }
  uint64_t bytes_written() const {
    return GetField<uint64_t>(VT_BYTES_WRITTEN, 0);
  }
  const FileWriteError *error() const {
    return GetPointer<const FileWriteError *>(VT_ERROR);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_SUCCESS) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_ERROR_MSG) &&
           verifier.Verify(error_msg()) &&
           VerifyField<uint64_t>(verifier, VT_BYTES_WRITTEN) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_ERROR) &&
           verifier.VerifyTable(error()) &&
           verifier.EndTable();
  }
};

struct FileWriteResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_success(bool success) {
    fbb_.AddElement<uint8_t>(FileWriteResponse::VT_SUCCESS, static_cast<uint8_t>(success), 0);
  }
  void add_error_msg(flatbuffers::Offset<flatbuffers::String> error_msg) {
    fbb_.AddOffset(FileWriteResponse::VT_ERROR_MSG, error_msg);
  }
  void add_bytes_written(uint64_t bytes_written) {
    fbb_.AddElement<uint64_t>(FileWriteResponse::VT_BYTES_WRITTEN, bytes_written, 0);
  }
  void add_error(flatbuffers::Offset<FileWriteError> error) {
    fbb_.AddOffset(FileWriteResponse::VT_ERROR, error);
  }
  FileWriteResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  FileWriteResponseBuilder &operator=(const FileWriteResponseBuilder &);
  flatbuffers::Offset<FileWriteResponse> Finish() {
    const auto end = fbb_.EndTable(start_, 4);
    auto o = flatbuffers::Offset<FileWriteResponse>(end);
    return o;
  }
};

inline flatbuffers::Offset<FileWriteResponse> CreateFileWriteResponse(
    flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    flatbuffers::Offset<flatbuffers::String> error_msg = 0,
    uint64_t bytes_written = 0,
    flatbuffers::Offset<FileWriteError> error = 0) {
  FileWriteResponseBuilder builder_(_fbb);
  builder_.add_bytes_written(bytes_written);
  builder_.add_error(error);
  builder_.add_error_msg(error_msg);
  builder_.add_success(success);
  return builder_.Finish();
}

inline flatbuffers::Offset<FileWriteResponse> CreateFileWriteResponseDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    const char *error_msg = nullptr,
    uint64_t bytes_written = 0,
    flatbuffers::Offset<FileWriteError> error = 0) {
  return mbtool::daemon::v3::CreateFileWriteResponse(
      _fbb,
      success,
      error_msg ? _fbb.CreateString(error_msg) : 0,
      bytes_written,
      error);
}

}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_FILEWRITE_MBTOOL_DAEMON_V3_H_
