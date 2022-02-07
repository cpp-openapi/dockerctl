cmake_policy(SET CMP0048 NEW) # set version in project
project(dockerctl VERSION 0.0.1 LANGUAGES CXX)

cmake_minimum_required(VERSION 3.14)

set (CMAKE_CXX_STANDARD 17)

#set(OPENAPI_LOCAL_DEV ON)
option(OPENAPI_LOCAL_DEV "Use local depenency mode for cpp-swagger" OFF)

if(OPENAPI_LOCAL_DEV)
  set(cpp_swagger_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../cpp-swagger)
  set(cpp_swagger_BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR}/_deps/local_cpp_swagger_build)
  add_subdirectory(${cpp_swagger_SOURCE_DIR} ${cpp_swagger_BINARY_DIR} EXCLUDE_FROM_ALL)
else()
  message(STATUS "Fetching cpp-swagger")
  include(FetchContent)
  FetchContent_Declare(cpp_swagger
    GIT_REPOSITORY https://github.com/cpp-openapi/cpp-swagger.git
    GIT_TAG 36a867fd73d30f9fd256dc99e9645b23fc1b4b68)
  FetchContent_GetProperties(cpp_swagger)
  if(NOT cpp_swagger_POPULATED)
    FetchContent_Populate(cpp_swagger)
    add_subdirectory(${cpp_swagger_SOURCE_DIR} ${cpp_swagger_BINARY_DIR} EXCLUDE_FROM_ALL)
  endif()
endif(OPENAPI_LOCAL_DEV)

list(APPEND CMAKE_MODULE_PATH "${cpp_swagger_SOURCE_DIR}/cmake")

include(UseOpenAPI)

openapi_generate(
  private-generate-dockerctl
  SPEC "${CMAKE_CURRENT_SOURCE_DIR}/api/swagger.yaml"
  OUTDIR "${CMAKE_CURRENT_SOURCE_DIR}/gen"
)

# need to modify the generated code to disable macro

if(WIN32)
add_custom_target(
    generate-dockerctl
    DEPENDS private-generate-dockerctl
    COMMAND cmd /c hack\\append.cmd
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
else()
add_custom_target(
    generate-dockerctl
    DEPENDS private-generate-dockerctl
    COMMAND sh hack/append.sh
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)
endif()


enable_testing()
add_subdirectory(gen/src)