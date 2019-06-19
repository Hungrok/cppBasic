#include <iostream>
#include "class.h"


void funcArgTest1(MyCls3 obj1, MyCls3& obj2, MyCls3 *obj3) ;

void classTest(){
    // instance 객체화
    MyCls3 cobj1 = MyCls3() ; // by value
    MyCls3& cobj2 = cobj1 ; // by reference
    MyCls3 *cobj3 = new MyCls3() ;// by pointer
    MyCls1 *cobj4 = new MyCls3() ;// ADT (abstract data type) concept - type casting


    // member 접근
    MyCls1::method1() ; // static member without instance
    cobj3->method1() ; // can access even static member
    cobj3->method2() ; // override - pure virtual
    cobj3->method3() ; // override - virtual member
    cobj3->method6() ; // override - normal member

    MyCls3 cobj5 = MyCls3() ; // by value
    MyCls3 cobj6 = MyCls3() ; // by value
    MyCls3 *cobj7 = new MyCls3() ; // by pointer

    std::cout << &cobj5 <<" " << &cobj6 <<" " << cobj7 << std::endl;
    funcArgTest1(cobj5,cobj6,cobj7) ;

}

void funcArgTest1(MyCls3 obj1, MyCls3& obj2, MyCls3 *obj3){

    // memory address - we can see the pointer is allocated in heap
    std::cout << &obj1 <<" " << &obj2 <<" " << obj3 << std::endl;

    obj1.int1 = 11 ;  // effect even call-by-value
    obj2.int1 = 12 ;  // effect as call-by-reference
    obj3->int1 = 13 ; // effect as call-by-pointer
    obj1.method2() ; // 11
    obj2.method2() ; // 12
    obj3->method2() ; // 13
}

