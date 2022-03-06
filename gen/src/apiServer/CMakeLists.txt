file(GLOB SOURCES
    *.h
    *.cpp
)

add_library(docker_Engine_API_apiServer
    STATIC ${SOURCES}
)

target_include_directories(docker_Engine_API_apiServer
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(docker_Engine_API_apiServer
    PUBLIC docker_Engine_API_common 
    docker_Engine_API_model
    openapi_runtime_middleware
)