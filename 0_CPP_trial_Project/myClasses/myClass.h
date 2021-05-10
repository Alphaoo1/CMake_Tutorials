#ifndef MYCLASS_H
#define MYCLASS_H

class myClass
{
    // This is a test class
    // here we declare it's members

protected:
    int var3 = 2;
    int var4 = 3;
//    #include "class_protected_member.h"


public:
    int var1 = 2;
    int var2 = 3;

    void printMyMSG();

    // Constructor
    myClass();

    // Destructor
    ~myClass();
};

#endif
