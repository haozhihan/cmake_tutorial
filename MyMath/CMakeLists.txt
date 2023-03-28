# 将源代码编译成静态库或动态链接库。
add_library(libmymath STATIC mysqrt.cpp)


# add_library(<name> [STATIC | SHARED | MODULE]
#             [EXCLUDE_FROM_ALL]
#             source1 [source2 ...])
            
# add_executable(<name> [WIN32] [MACOSX_BUNDLE] 
#             [EXCLUDE_FROM_ALL] 
#             source1 [source2 ...])