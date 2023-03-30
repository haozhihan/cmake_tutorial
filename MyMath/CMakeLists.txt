add_library(libmymath STATIC mysqrt.cpp)
target_include_directories(libmymath PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

if(USE_C99)

    # add_definitions 用于在编译时定义一些宏变量，
    # 以便在代码中进行条件编译或者控制代码行为。
    add_definitions(-DUSE_C99)
    # target_compile_definitions(libmymath PRIVATE USE_C99)

    find_package(Boost REQUIRED COMPONENTS math_c99)
    target_link_libraries(libmymath PRIVATE Boost::math_c99)
endif()

# add_definitions 命令会影响所有通过 CMake 构建
# 的目标（包括库和可执行文件, 因此需要谨慎使用。
#
# 如果只想针对某个特定目标添加宏定义，可以使用 
# target_compile_definitions 
# 
# target_compile_definitions(libmymath PRIVATE USE_C99)


