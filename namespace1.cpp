#include <iostream>
#include "namespace.h"

int testNameSpace1::nsvar1 = 30 ;  // outside define
void testNameSpace1::function1() { // outside define
    std::cout << "outside function1 in ns1.cpp" << std::endl;
}
void testNameSpace1::testCls1::method1() { // outside define
    std::cout << "outside method1 in ns1.cpp" << std::endl;
}

namespace testNameSpace2{
    // global variable and function
    // can define in the namespace in case of in the source
    int nsvar1=10 ;
    const int nsvar2 = 300 ;
    void function1(){std::cout << "function1 in namespace2" << std::endl;}
}


void namespaceTest1() {

    testNameSpace1::function1() ;
    testNameSpace1::function2() ;
    testNameSpace1::testCls1 obj1 = testNameSpace1::testCls1() ;
    obj1.method1() ;
    obj1.method2() ;
    obj1.method3() ;

    testNameSpace2::function1() ;
}