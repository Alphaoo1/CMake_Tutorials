# CMakeLists.txt

####################################
# CMake requirements
####################################

#cmake_minimum_required(VERSION 2.8)
#project(Functions_Lib LANGUAGES CXX DESCRIPTION "Functions Library to be used as support functions")

#enable_testing()
#include(CTest)

#############################################################
### Find requirements
#############################################################


#############################################################
### Include dir and files
#############################################################
set(my_sub_includes
    "myFunc.h"
    "addMyNo.h")

set(my_sub_cpps
    "myFunc.cpp"
    "addMyNo.cpp")

#############################################################
### Build Project
#############################################################
add_library(Functions_Lib ${my_sub_includes} ${my_sub_cpps})
#add_library(Functions_Lib addMyNo.cpp)

#############################################################
### Define tests
#############################################################
