#include <iostream>
#include "namespace.h"

int testNameSpace1::nsvar2 = 40 ; // outside define
void testNameSpace1::function2() { // outside define
    std::cout << "outside function2 in ns2.cpp" << std::endl;
}
void testNameSpace1::testCls1::method2() { // outside define
    std::cout << "outside method2 in ns2.cpp" << std::endl;
}

namespace testNameSpace3{
    // global variable and function
    // can define in the namespace in case of in the source
    int nsvar1=10 ;
    const int nsvar2 = 300 ;
    void function1(){std::cout << "function1 in namespace3" << std::endl;}
}

void namespaceTest2() {

    testNameSpace1::function1() ;
    testNameSpace1::function2() ;
    testNameSpace1::testCls1 obj1 = testNameSpace1::testCls1() ;
    obj1.method1() ;
    obj1.method2() ;
    obj1.method3() ;

    testNameSpace3::function1() ;

}
