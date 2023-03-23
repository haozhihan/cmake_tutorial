# 查找 Boost 库中 math_c99 组件
find_package(Boost REQUIRED COMPONENTS math_c99)

add_library(libmymath STATIC mysqrt.cpp)

# 链接  Boost 库中 math_c99 组件
target_link_libraries(libmymath PRIVATE Boost::math_c99)

# 包含头文件路径
target_include_directories(libmymath PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)