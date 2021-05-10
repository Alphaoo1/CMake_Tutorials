# CMakeLists.txt

####################################
# CMake requirements
####################################

cmake_minimum_required(VERSION 2.8)
project(trial LANGUAGES CXX DESCRIPTION "Trial projects")

enable_testing()
include(CTest)

#############################################################
### Find requirements
#############################################################


#############################################################
### Include dir and files
#############################################################
include_directories(myClasses myFunctions include)

set(my_includes
    "include/myInclude.h"
    "include/class_protected_member.h"
    "myFunctions/myFunc.h"
    "myFunctions/addMyNo.h")

set(my_cpps
    main.cpp
    "myClasses/myClass.cpp")

#############################################################
### Build Project
#############################################################
add_executable(trial ${my_includes} ${my_cpps})

#file(GLOB_RECURSE SOURCES "myClass/*.cpp" main.cpp)
#add_executable(trial ${SOURCES})
##add_executable(trial main.cpp)


#############################################################
### Define tests
#############################################################
