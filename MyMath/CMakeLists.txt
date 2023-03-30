add_library(libmymath STATIC mysqrt.cpp)

#
# 查找 Boost 库中 math_c99 组件
# [REQUIRED] 标志将包标记为必需项。
# [COMPONENTS] 参数用于指定要查找的特定组件。
#
find_package(Boost REQUIRED COMPONENTS math_c99)

#
# 链接 Boost 库中 math_c99 组件
#
# 注意此处的 PRIVATE 关键字，表示只有 libmymath 库可以使用 math_c99 组件
# 其他任何链接 libmymath 的库都不可以使用 math_c99 组件
#
target_link_libraries(libmymath PRIVATE Boost::math_c99)

# 包含头文件路径
target_include_directories(libmymath PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)



#
# 如果想要链接BLAS库，可以使用下面的方式
# find_package(BLAS REQUIRED)
# target_link_libraries(my_project ${BLAS_LIBRARIES})
# 



