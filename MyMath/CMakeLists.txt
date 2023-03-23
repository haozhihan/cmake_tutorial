# 查找 Boost 库中 math_c99 组件
find_package(GSL REQUIRED)

add_library(libmymath STATIC mysqrt.cpp)
target_link_libraries(libmymath PRIVATE GSL::gsl GSL::gslcblas)

# 包含头文件路径
include_directories(${GSL_INCLUDE_DIRS})
link_directories(${GSL_LIBRARY_DIRS})

target_include_directories(libmymath 
                        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


# 链接到GSL库
# target_link_libraries(libmymath PRIVATE Boost::math_c99)
# target_link_libraries(libmymath PRIVATE GSL::gsl GSL::gslcblas)