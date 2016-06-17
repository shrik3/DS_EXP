cmake_minimum_required(VERSION 3.3)
project(DS_EXP)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
include_directories(lib/)
set(SOURCE_FILES )
add_library(DS lib/STACK.c lib/SqList.c lib/common.h lib/LinkList.c
        lib/Sq_LinkList.c lib/MString.c lib/BiTree.c lib/HuffmanTree.c)

add_executable(KMP KMP.c)
add_executable(gen data_gen.c)
add_executable(rander rander.c)