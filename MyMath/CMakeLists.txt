add_library(libmymath STATIC mysqrt.cpp)
target_include_directories(libmymath PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)