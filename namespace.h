#ifndef CPPWS_NAMESPACE_H
#define CPPWS_NAMESPACE_H

#include <iostream>

namespace testNameSpace1{
    // global variable and function
    extern int nsvar1 ; // should be extern in header
    extern int nsvar2 ; // should be extern in header
    const int nsvar3 = 300 ;
    void function1() ; // can't define in namespace in header
    void function2() ; // can't define in namespace in header

    class testCls1{
    public:
        void method1() ;
        void method2() ;
        void method3(){ // == inline void method3()
            std::cout << "method3 in namespace-class" << std::endl;}
    };
}

/* need c++17 compiler flag
namespace C::D::E { // C++17
    void function1() ;
}
namespace C::D::E { // can split in same namespace name
    void function2() ;
}
 */

#endif //CPPWS_NAMESPACE_H
