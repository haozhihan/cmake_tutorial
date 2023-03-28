cmake_minimum_required(VERSION 3.9)
project(app)

# add the MathFunctions library
add_subdirectory(MyMath)

# add the executable
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE libmymath)
