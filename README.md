# protobuf-sensor-msgs
sensor message of protobuf communication

- [x] image
- [x] point cloud

## Dependence

- **eCAL** (Protobuf 3.0.0)

  ```shell
  sudo add-apt-repository ppa:ecal/ecal-latest
  sudo apt-get update
  sudo apt-get install ecal
  ```

## Usage

- **compile**

```bash
 git clone https://gitee.com/csc105/protobuf-sensor-msgs.git
 mkdir build
 cd build
 cmake -DPROTO_GEN_CXX=ON -DPROTO_GEN_JAVA=ON -DPROTO_GEN_PYTHON=ON ..
 make 
```

- **as subdirectory**

```cmake
# add subdirectory
## add protobuf, set the protobuf file language support you want to generate
set(PROTO_GEN_CXX OFF CACHE BOOL "enable CXX protobuf file generate") 
set(PROTO_GEN_JAVA OFF CACHE BOOL "enable JAVA protobuf file generate")
set(PROTO_GEN_PYTHON OFF CACHE BOOL "enable PYTHON protobuf file generate")
add_subdirectory(external/proto_sensor_msgs) 

# include cloud  protobuf dir 
get_property(PROTO_SENSOR_MSGS_INCLUDE_DIR GLOBAL PROPERTY "PROTO_SENSOR_MSGS_DIR")
MESSAGE(STATUS "SMILES MOWER PROTOBUF_DIR :${PROTO_SENSOR_MSGS_INCLUDE_DIR}")
include_directories(${PROTO_SENSOR_MSGS_INCLUDE_DIR})

# target link libraies
add_executable(xxx xxxx.cpp)
target_link_libraries(xxx proto_sensor_msgs )
```

