cmake_minimum_required(VERSION 3.9)

# 添加版本号
project(app VERSION 1.0)
# SET 可以用来定义变量
SET(SRC_LIST main.cpp mysqrt.cpp)

#
# 指定 C++ 标准
#
# 表示使用 C++11 标准来编译代码，但不会强制使用该版本。
set(CMAKE_CXX_STANDARD 11)
# 如果我们想要强制使用 C++11 标准，可以使用下面的命令：
set(CMAKE_CXX_STANDARD_REQUIRED ON) # 如果编译器不支持C++11，则会发生错误并停止编译过程。
# 禁用编译器的特定扩展功能。
set(CMAKE_CXX_EXTENSIONS OFF)


add_executable(${PROJECT_NAME} ${SRC_LIST})



#[[
使用如下命令构建本项目：

# 生成构建目录
cmake -B build

# 执行构建
cmake --build build

# 运行 app 程序
./build/app

#]]