#include <iostream>
#include "myClass.h"

void myClass::printMyMSG()
{
    // Here we define the member fucntion of myClass
    std::cout << "\033[34;1m >>> myClass::printMyMSG() called \033[0m" <<  std::endl;
}

// Constructor
myClass::myClass()
{
    std::cout << "\033[31;1m >>> myClass is created \033[0m" << std::endl;
}

// Destructor
myClass::~myClass()
{
    std::cout << "\033[31;1m >>> myClass is destroyed \033[0m" << std::endl;
}
