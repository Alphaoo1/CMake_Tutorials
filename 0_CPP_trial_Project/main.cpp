#include <iostream> // std::cout
#include "myFunc.h"
#include "myClass.h"
#include "addMyNo.h"

int main() {
    std::cout << "Hello from Alpha001!" << std::endl;
    std::cout << " . " << std::endl;
    std::cout << " . " << std::endl;
    std::cout << " . " << std::endl;
    std::cout << "This is a trial " << std::endl;

    // Include a piece of code directly
    #include "myInclude.h"

    myFunc();

    myClass createObj;
    createObj.printMyMSG();


    int printMySum( addMyNo(createObj.var1, createObj.var2));
    std::cout << "The sum of the addition of two variable is = " << printMySum << std::endl;

    return 0;
}
