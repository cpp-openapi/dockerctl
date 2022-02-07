file(GLOB SOURCES
    *.h
    *.cpp
)

# filter out tests
list(FILTER SOURCES EXCLUDE REGEX .*_test\\.cpp)

add_library(docker_Engine_API_model
    STATIC ${SOURCES}
)

target_include_directories(docker_Engine_API_model
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(docker_Engine_API_model
    PUBLIC docker_Engine_API_common
)

# testing
file(GLOB TEST_SOURCES
    *_test.cpp
)

#foreach(test_file ${TEST_SOURCES})
#    get_filename_component(test_name ${test_file} NAME_WE)
#    add_executable(${test_name} ${test_file})
#    
#    target_link_libraries(${test_name} PRIVATE gtest_main docker_Engine_API_model)
#
#    add_test(NAME ${test_name} COMMAND ${test_name} WORKING_DIRECTORY ${CMAKE_BINARY_DIR})
#endforeach()

add_executable(docker_Engine_API_model_test ${TEST_SOURCES})
target_link_libraries(docker_Engine_API_model_test PRIVATE gtest_main docker_Engine_API_model)
add_test(NAME docker_Engine_API_model_test COMMAND docker_Engine_API_model_test WORKING_DIRECTORY ${CMAKE_BINARY_DIR})