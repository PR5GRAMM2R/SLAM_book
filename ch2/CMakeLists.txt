# 声明要求的 cmake 最低版本
cmake_minimum_required( VERSION 2.8 )

# 声明一个 cmake 工程
project( HelloSLAM )

set( CMAKE_BUILD_TYPE "Debug" )

# 添加一个可执行程序
# 语法：add_executable( 程序名 源代码文件 ）
add_executable( helloSLAM helloSLAM.cpp )

add_library( hello libHelloSLAM.cpp )

add_library( hello_shared SHARED libHelloSLAM.cpp )

add_executable( useHello useHello.cpp )

target_link_libraries( useHello hello_shared )

