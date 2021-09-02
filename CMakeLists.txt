cmake_minimum_required(VERSION 3.20)

project(lib)
message( "start lib" )

set(
    HEADERS
    framework.h
    )
        
    
set(
    SRCS
    dllmain.cpp
    )


add_library(called SHARED  ${HEADERS} ${SRCS} )
target_compile_definitions(called PRIVATE TEST_EXPORTS)
target_include_directories(called INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}")
