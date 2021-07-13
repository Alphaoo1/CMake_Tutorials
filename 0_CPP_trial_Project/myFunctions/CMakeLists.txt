#############################################################
### Include dir and files
#############################################################
set(my_sub_includes
    "Case_switches.h"
    "Source_Term_Switch.h")

set(my_sub_cpps
    "Case_switches.cpp"
    "Source_Term_Switch.cpp")

#############################################################
### Build Project
#############################################################
add_library(Helper_Functions_Lib ${my_sub_includes} ${my_sub_cpps})

