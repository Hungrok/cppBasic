#ifndef CPPWS_CLASS_H
#define CPPWS_CLASS_H

#include <iostream>

class MyCls1{
public:
    std::string str1 = "abc" ;
    int int1 = 100 ;
    mutable int int2 = 200 ;
    static int int3 ;  // must be initialized at outside
    static const int int4 = 400 ;
    const int int5 = 400 ;
public:
    static void method1(){ // static member method
        std::cout << "MyCls1-method1" << std::endl;}
    virtual void method2()=0 ;  // pure abstract method
    virtual void method3(){ // can override in derived
        std::cout << "MyCls1-method3" << std::endl;}
    void method4() const {;};  // immutable method
    friend void method5() ;  // friend method
    void method6(){ // == inline void method6()
        std::cout << "MyCls1-method6" << std::endl;}
};

class MyCls2 : private MyCls1 { // 임의로 private 시험
    // only friend method being inherited from base as do not have private
    void method2() {;} // override - abstract method, but can't access as private member
};
class MyCls3 final : public MyCls1{
public:
    void method2() override { // override - pure abstract method (MUST)
        std::cout << "MyCls3-method2=" <<int1 << std::endl;}
    void method3() override { // override virtual member
        std::cout << "MyCls3-method3" << std::endl;}
    void method6() { // can override even does not have virtual
        std::cout << "MyCls3-method6" << std::endl;}

};

#endif //CPPWS_CLASS_H
