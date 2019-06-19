#ifndef CPPWS_CLASS12_H
#define CPPWS_CLASS12_H


#include <iostream>

class testCls1{ // to test outside define
public:
    void method1() ; // only declaration
    void method2() ; //  only declaration
    void method3(){ // == inline void method3()
        std::cout << "testCls1-method3 in class" << std::endl;}
};

/*
void testCls1::method1(){ // can define here - but cause redefined as include multiple
    std::cout << "testCls1-method1 in header" << std::endl;
}
void testCls1::method3()   // error as redefined
*/

#endif //CPPWS_CLASS12_H
