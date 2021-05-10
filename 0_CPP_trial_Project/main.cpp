#include <iostream> // std::cout

#include "myClass.h"

#include "addMyNo.h"
#include "myFunc.h"

int main() {
    std::cout << "Hello from Alpha001!" << std::endl;
    std::cout << " . " << std::endl;
    std::cout << " . " << std::endl;
    std::cout << " . " << std::endl;
    std::cout << "This is a trial " << std::endl;

    // Include a piece of code directly
    #include "myInclude.h"

    // Create supporting function objects
    myFuncClass create_myFunc;
    adder create_addMyNo;
    myClass createObj;

    createObj.printMyMSG();

    create_myFunc.myFunc();
    int printMySum( create_addMyNo.addMyNo(createObj.var1, createObj.var2));
    std::cout << "The sum of the addition of two variable is = " << printMySum << std::endl;

    return 0;
}
