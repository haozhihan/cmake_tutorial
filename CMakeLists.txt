cmake_minimum_required(VERSION 3.9)
project(app)

add_subdirectory(MyMath)

add_executable(${PROJECT_NAME} main.cpp)
# 将指定的库链接到目标可执行文件或链接库中。
target_link_libraries(${PROJECT_NAME} PRIVATE libmymath)
