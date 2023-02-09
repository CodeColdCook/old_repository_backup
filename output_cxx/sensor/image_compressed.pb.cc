// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sensor/image_compressed.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "sensor/image_compressed.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace SensorMsg {

namespace {

const ::google::protobuf::Descriptor* ImageCompressed_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ImageCompressed_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_sensor_2fimage_5fcompressed_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_sensor_2fimage_5fcompressed_2eproto() {
  protobuf_AddDesc_sensor_2fimage_5fcompressed_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "sensor/image_compressed.proto");
  GOOGLE_CHECK(file != NULL);
  ImageCompressed_descriptor_ = file->message_type(0);
  static const int ImageCompressed_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImageCompressed, header_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImageCompressed, size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImageCompressed, compress_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImageCompressed, image_data_),
  };
  ImageCompressed_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ImageCompressed_descriptor_,
      ImageCompressed::default_instance_,
      ImageCompressed_offsets_,
      -1,
      -1,
      -1,
      sizeof(ImageCompressed),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImageCompressed, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ImageCompressed, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_sensor_2fimage_5fcompressed_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ImageCompressed_descriptor_, &ImageCompressed::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_sensor_2fimage_5fcompressed_2eproto() {
  delete ImageCompressed::default_instance_;
  delete ImageCompressed_reflection_;
}

void protobuf_AddDesc_sensor_2fimage_5fcompressed_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_sensor_2fimage_5fcompressed_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::CommonMsg::protobuf_AddDesc_common_2fheader_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\035sensor/image_compressed.proto\022\tSensorM"
    "sg\032\023common/header.proto\"m\n\017ImageCompress"
    "ed\022!\n\006header\030\001 \001(\0132\021.CommonMsg.Header\022\014\n"
    "\004size\030\002 \001(\005\022\025\n\rcompress_type\030\003 \001(\t\022\022\n\nim"
    "age_data\030\004 \001(\014b\006proto3", 182);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "sensor/image_compressed.proto", &protobuf_RegisterTypes);
  ImageCompressed::default_instance_ = new ImageCompressed();
  ImageCompressed::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_sensor_2fimage_5fcompressed_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_sensor_2fimage_5fcompressed_2eproto {
  StaticDescriptorInitializer_sensor_2fimage_5fcompressed_2eproto() {
    protobuf_AddDesc_sensor_2fimage_5fcompressed_2eproto();
  }
} static_descriptor_initializer_sensor_2fimage_5fcompressed_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ImageCompressed::kHeaderFieldNumber;
const int ImageCompressed::kSizeFieldNumber;
const int ImageCompressed::kCompressTypeFieldNumber;
const int ImageCompressed::kImageDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ImageCompressed::ImageCompressed()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:SensorMsg.ImageCompressed)
}

void ImageCompressed::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  header_ = const_cast< ::CommonMsg::Header*>(&::CommonMsg::Header::default_instance());
}

ImageCompressed::ImageCompressed(const ImageCompressed& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:SensorMsg.ImageCompressed)
}

void ImageCompressed::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  header_ = NULL;
  size_ = 0;
  compress_type_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  image_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ImageCompressed::~ImageCompressed() {
  // @@protoc_insertion_point(destructor:SensorMsg.ImageCompressed)
  SharedDtor();
}

void ImageCompressed::SharedDtor() {
  compress_type_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  image_data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete header_;
  }
}

void ImageCompressed::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ImageCompressed::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ImageCompressed_descriptor_;
}

const ImageCompressed& ImageCompressed::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_sensor_2fimage_5fcompressed_2eproto();
  return *default_instance_;
}

ImageCompressed* ImageCompressed::default_instance_ = NULL;

ImageCompressed* ImageCompressed::New(::google::protobuf::Arena* arena) const {
  ImageCompressed* n = new ImageCompressed;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ImageCompressed::Clear() {
// @@protoc_insertion_point(message_clear_start:SensorMsg.ImageCompressed)
  if (GetArenaNoVirtual() == NULL && header_ != NULL) delete header_;
  header_ = NULL;
  size_ = 0;
  compress_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  image_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool ImageCompressed::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:SensorMsg.ImageCompressed)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .CommonMsg.Header header = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_size;
        break;
      }

      // optional int32 size = 2;
      case 2: {
        if (tag == 16) {
         parse_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &size_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_compress_type;
        break;
      }

      // optional string compress_type = 3;
      case 3: {
        if (tag == 26) {
         parse_compress_type:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_compress_type()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->compress_type().data(), this->compress_type().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "SensorMsg.ImageCompressed.compress_type"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_image_data;
        break;
      }

      // optional bytes image_data = 4;
      case 4: {
        if (tag == 34) {
         parse_image_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_image_data()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:SensorMsg.ImageCompressed)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:SensorMsg.ImageCompressed)
  return false;
#undef DO_
}

void ImageCompressed::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:SensorMsg.ImageCompressed)
  // optional .CommonMsg.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->header_, output);
  }

  // optional int32 size = 2;
  if (this->size() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->size(), output);
  }

  // optional string compress_type = 3;
  if (this->compress_type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->compress_type().data(), this->compress_type().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "SensorMsg.ImageCompressed.compress_type");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->compress_type(), output);
  }

  // optional bytes image_data = 4;
  if (this->image_data().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->image_data(), output);
  }

  // @@protoc_insertion_point(serialize_end:SensorMsg.ImageCompressed)
}

::google::protobuf::uint8* ImageCompressed::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:SensorMsg.ImageCompressed)
  // optional .CommonMsg.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->header_, false, target);
  }

  // optional int32 size = 2;
  if (this->size() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->size(), target);
  }

  // optional string compress_type = 3;
  if (this->compress_type().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->compress_type().data(), this->compress_type().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "SensorMsg.ImageCompressed.compress_type");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->compress_type(), target);
  }

  // optional bytes image_data = 4;
  if (this->image_data().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->image_data(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:SensorMsg.ImageCompressed)
  return target;
}

int ImageCompressed::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:SensorMsg.ImageCompressed)
  int total_size = 0;

  // optional .CommonMsg.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->header_);
  }

  // optional int32 size = 2;
  if (this->size() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->size());
  }

  // optional string compress_type = 3;
  if (this->compress_type().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->compress_type());
  }

  // optional bytes image_data = 4;
  if (this->image_data().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->image_data());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ImageCompressed::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:SensorMsg.ImageCompressed)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ImageCompressed* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ImageCompressed>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:SensorMsg.ImageCompressed)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:SensorMsg.ImageCompressed)
    MergeFrom(*source);
  }
}

void ImageCompressed::MergeFrom(const ImageCompressed& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:SensorMsg.ImageCompressed)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.has_header()) {
    mutable_header()->::CommonMsg::Header::MergeFrom(from.header());
  }
  if (from.size() != 0) {
    set_size(from.size());
  }
  if (from.compress_type().size() > 0) {

    compress_type_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.compress_type_);
  }
  if (from.image_data().size() > 0) {

    image_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.image_data_);
  }
}

void ImageCompressed::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:SensorMsg.ImageCompressed)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ImageCompressed::CopyFrom(const ImageCompressed& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SensorMsg.ImageCompressed)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ImageCompressed::IsInitialized() const {

  return true;
}

void ImageCompressed::Swap(ImageCompressed* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ImageCompressed::InternalSwap(ImageCompressed* other) {
  std::swap(header_, other->header_);
  std::swap(size_, other->size_);
  compress_type_.Swap(&other->compress_type_);
  image_data_.Swap(&other->image_data_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ImageCompressed::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ImageCompressed_descriptor_;
  metadata.reflection = ImageCompressed_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ImageCompressed

// optional .CommonMsg.Header header = 1;
bool ImageCompressed::has_header() const {
  return !_is_default_instance_ && header_ != NULL;
}
void ImageCompressed::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) delete header_;
  header_ = NULL;
}
const ::CommonMsg::Header& ImageCompressed::header() const {
  // @@protoc_insertion_point(field_get:SensorMsg.ImageCompressed.header)
  return header_ != NULL ? *header_ : *default_instance_->header_;
}
::CommonMsg::Header* ImageCompressed::mutable_header() {
  
  if (header_ == NULL) {
    header_ = new ::CommonMsg::Header;
  }
  // @@protoc_insertion_point(field_mutable:SensorMsg.ImageCompressed.header)
  return header_;
}
::CommonMsg::Header* ImageCompressed::release_header() {
  // @@protoc_insertion_point(field_release:SensorMsg.ImageCompressed.header)
  
  ::CommonMsg::Header* temp = header_;
  header_ = NULL;
  return temp;
}
void ImageCompressed::set_allocated_header(::CommonMsg::Header* header) {
  delete header_;
  header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:SensorMsg.ImageCompressed.header)
}

// optional int32 size = 2;
void ImageCompressed::clear_size() {
  size_ = 0;
}
 ::google::protobuf::int32 ImageCompressed::size() const {
  // @@protoc_insertion_point(field_get:SensorMsg.ImageCompressed.size)
  return size_;
}
 void ImageCompressed::set_size(::google::protobuf::int32 value) {
  
  size_ = value;
  // @@protoc_insertion_point(field_set:SensorMsg.ImageCompressed.size)
}

// optional string compress_type = 3;
void ImageCompressed::clear_compress_type() {
  compress_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ImageCompressed::compress_type() const {
  // @@protoc_insertion_point(field_get:SensorMsg.ImageCompressed.compress_type)
  return compress_type_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ImageCompressed::set_compress_type(const ::std::string& value) {
  
  compress_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:SensorMsg.ImageCompressed.compress_type)
}
 void ImageCompressed::set_compress_type(const char* value) {
  
  compress_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:SensorMsg.ImageCompressed.compress_type)
}
 void ImageCompressed::set_compress_type(const char* value, size_t size) {
  
  compress_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:SensorMsg.ImageCompressed.compress_type)
}
 ::std::string* ImageCompressed::mutable_compress_type() {
  
  // @@protoc_insertion_point(field_mutable:SensorMsg.ImageCompressed.compress_type)
  return compress_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ImageCompressed::release_compress_type() {
  // @@protoc_insertion_point(field_release:SensorMsg.ImageCompressed.compress_type)
  
  return compress_type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ImageCompressed::set_allocated_compress_type(::std::string* compress_type) {
  if (compress_type != NULL) {
    
  } else {
    
  }
  compress_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), compress_type);
  // @@protoc_insertion_point(field_set_allocated:SensorMsg.ImageCompressed.compress_type)
}

// optional bytes image_data = 4;
void ImageCompressed::clear_image_data() {
  image_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ImageCompressed::image_data() const {
  // @@protoc_insertion_point(field_get:SensorMsg.ImageCompressed.image_data)
  return image_data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ImageCompressed::set_image_data(const ::std::string& value) {
  
  image_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:SensorMsg.ImageCompressed.image_data)
}
 void ImageCompressed::set_image_data(const char* value) {
  
  image_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:SensorMsg.ImageCompressed.image_data)
}
 void ImageCompressed::set_image_data(const void* value, size_t size) {
  
  image_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:SensorMsg.ImageCompressed.image_data)
}
 ::std::string* ImageCompressed::mutable_image_data() {
  
  // @@protoc_insertion_point(field_mutable:SensorMsg.ImageCompressed.image_data)
  return image_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ImageCompressed::release_image_data() {
  // @@protoc_insertion_point(field_release:SensorMsg.ImageCompressed.image_data)
  
  return image_data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ImageCompressed::set_allocated_image_data(::std::string* image_data) {
  if (image_data != NULL) {
    
  } else {
    
  }
  image_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), image_data);
  // @@protoc_insertion_point(field_set_allocated:SensorMsg.ImageCompressed.image_data)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace SensorMsg

// @@protoc_insertion_point(global_scope)
