add_library(libmymath STATIC mysqrt.cpp)

# target_include_directories 的 PUBLIC 参数
# 表示这个包含目录是 libanswer 的公开接口一部分，
# 链接 libanswer 的 target 可以 #include 该目录中的文件。
target_include_directories(libmymath PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# CMAKE_CURRENT_SOURCE_DIR 是 CMake 内置变量，表示当前 CMakeLists.txt 文件所在目录。