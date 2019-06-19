#include <iostream>
#include "class12.h"

// to test class member outside define

void testCls1::method2() { // outside define
    std::cout << "outside testCls1-method2 in test2.cpp" << std::endl;
}
void class2Test() {
    testCls1 obj1 = testCls1() ;
    obj1.method1() ; // what will be
    obj1.method2() ;
    obj1.method3() ;

}