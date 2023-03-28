add_library(libmymath STATIC mysqrt.cpp)
target_include_directories(libmymath PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

if(USE_C99)
    find_package(Boost REQUIRED COMPONENTS math_c99)
    target_link_libraries(libmymath PRIVATE Boost::math_c99)
endif()


