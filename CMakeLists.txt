cmake_minimum_required(VERSION 3.9)
project(app)

add_subdirectory(MyMath)

#
# option 是 CMake 中的一个命令，用于配置一个布尔选项，
# 并将其保存到 CMake 缓存中。
# 
#   option(<option_variable> "description" [initial value])
# 
option(USE_C99 "Use C99 math library" ON)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE libmymath)
