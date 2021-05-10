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
