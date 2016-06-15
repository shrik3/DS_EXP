cmake_minimum_required(VERSION 3.3)
project(DS_EXP)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
include_directories(lib/)
set(SOURCE_FILES )
add_library(DS lib/STACK.c lib/SqList.c lib/common.h lib/LinkList.c
        lib/Sq_LinkList.c lib/MString.c lib/BiTree.c lib/HuffmanTree.c)

add_executable(instance ds_6.c lib/BiTree.c)
add_executable(instance2 ds_7.c lib/BiTree.c lib/STACK.c)
add_executable(instance3 testing.c)
add_executable(KMP KMP.c)
