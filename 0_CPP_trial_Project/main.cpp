#include <iostream> // std::cout
#include "myFunc.h"
#include "myClass.h"

#include <myClass.h>

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

    return 0;
}
