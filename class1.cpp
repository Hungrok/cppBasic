#include <iostream>
#include "class12.h"

// to test class member outside define

void testCls1::method1() { // outside define
    std::cout << "outside testCls1-method1 in test1.cpp" << std::endl;
}
// void testCls1::method3() { // error as redefined

void class1Test() {
    testCls1 obj1 = testCls1() ;
    obj1.method1() ;
    obj1.method2() ; // what will be
    obj1.method3() ;
}