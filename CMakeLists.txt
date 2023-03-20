# 指定最小 CMake 版本要求
cmake_minimum_required(VERSION 3.9)
# 设置项目名称
project(app)


# add the MathFunctions library
add_subdirectory(MyMath)

# add the executable
add_executable(${PROJECT_NAME} compute_sqrt.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE libmymath)
