cmake_minimum_required(VERSION 3.9)
project(app)

# 在实际项目中，我们通常会将代码分为不同的模块，每个模块会放在一个独立的目录下。
# 使用add_subdirectory命令可以让CMake进入该目录，并读取该目录下的CMakeLists.txt文件（如果存在)
add_subdirectory(MyMath)


add_executable(${PROJECT_NAME} main.cpp)

# 将指定的库链接到目标可执行文件或链接库中。
# 
# 语法： target_link_libraries(target [PRIVATE|PUBLIC] library1 library2 ...)
#
target_link_libraries(${PROJECT_NAME} PRIVATE libmymath)

# 用于为目标可执行文件或链接库添加头文件搜索路径。
#
# 语法： target_include_directories(target [INTERFACE|PUBLIC|PRIVATE] dir1 dir2 ...)
# 
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/MyMath/include)


#[[
使用如下命令构建本项目：

# 生成构建目录
cmake -B build

# 执行构建
cmake --build build

# 运行 app 程序
./build/app

#]]