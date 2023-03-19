# 指定最小 CMake 版本要求
cmake_minimum_required(VERSION 3.9)
# 设置项目名称
project(app)
# 添加可执行文件 target
add_executable(app compute_sqrt.cpp mysqrt.cpp)

#[[
使用如下命令构建本项目：

    cmake -B build      # 生成构建目录
    cmake --build build # 执行构建
    ./build/app         # 运行 app 程序
#]]