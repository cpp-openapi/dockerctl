include(FetchContent)
FetchContent_Declare(
googletest
# Specify the commit you depend on and update it regularly.
URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
message(STATUS "Fetching googletest")
FetchContent_MakeAvailable(googletest)

file(GLOB TEST_SOURCES
    *_test.cpp
)

foreach(test_file ${TEST_SOURCES})
   get_filename_component(test_name ${test_file} NAME_WE)
   add_executable(${test_name} ${test_file})
   
   target_link_libraries(${test_name} PRIVATE gtest_main openapi_client_curlpp docker_Engine_API_api)
   target_include_directories(${test_name} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

    # these tests require docke engine and needs to be invoked manually
    # add_test(NAME ${test_name} COMMAND ${test_name} WORKING_DIRECTORY ${CMAKE_BINARY_DIR})
endforeach()