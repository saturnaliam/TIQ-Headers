cmake_minimum_required(VERSION 3.17)

project(HTIQ)

set(EXECUTABLE_OUTPUT_PATH "${PROJECT_SOURCE_DIR}/bin")

file(GLOB SOURCES
${PROJECT_SOURCE_DIR}/include/*.hpp
${PROJECT_SOURCE_DIR}/include/*.cpp
${PROJECT_SOURCE_DIR}/main.cpp)

add_executable(main ${SOURCES})