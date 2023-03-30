cmake_minimum_required(VERSION 3.9)
project(app)

add_subdirectory(MyMath)

option(USE_C99 "Use C99 math library" ON)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE libmymath)
