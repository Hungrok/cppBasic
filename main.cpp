#include <iostream>  // standard library 에 해당하는 header file 은 <>
#include "class.h"   // 내 project header file

// external global function proto-type
void classTest() ;
void class1Test() ;
void class2Test() ;
void namespaceTest1() ;
void namespaceTest2() ;
void classConstOpeTest() ;
void functionTest() ;

// Local global function proto-type
void print(std::string s1) ;
void stringTest() ;
void swap(int& x, int& y) ;

// global variable - class 객체화 로 만 예
MyCls3 gcls1 = MyCls3() ;   // value -  stack 에 객체 생성
MyCls3 &gcls2 = gcls1 ;     // reference
MyCls3 *gcls3 = new MyCls3() ;  // pointer - heap 에 객체 생성
const MyCls3 gcls4 = MyCls3() ;  // 상수
static MyCls3 gcls5 = MyCls3() ;  // global 내부에서만 사용 - 변수
static const MyCls3 gcls6 = MyCls3() ; // global 내부에서만 사용 - 상수
volatile MyCls3 gcls7 = MyCls3() ;  //

int main() { // entry code for executable (object, library, shared object, executable)

    print("HelloWorld") ;
    classTest() ;
    class1Test() ;
    class2Test() ;
    namespaceTest1() ;
    namespaceTest2() ;
    classConstOpeTest() ;
    functionTest() ;
    return 0;
}

void print(std::string s1){

    std::string *s2 = new std::string(s1) ;
    std::cout << s2->c_str() << std::endl;
}

void stringTest(){

    std::string s1 = "abcdefgh" ;
    std::string& s1a = s1 ;
    std::string s2 = "abcdefgh" ;
    std::string *s3= new std::string("abcdefgh") ;

    std::string s4 = s1+s2 ; //  we can use + operator
    if(s1==s2) // we can compare value - true
        std::cout << "s1==s2" << std::endl;
    if (s1==*s3) // we can compare value - true
        std::cout << "s1==*s3" << std::endl;

    std::cout << s1a.c_str() << std::endl;
    std::cout << s3->c_str() << std::endl;
}


void swap(int& x, int& y) {
    int temp = x ;
    x = y ;
    y = temp ;
}

void arrayTest(){
    int iar1[5] = {0,1,2,3,4} ;
    int *iar2 = new int[5] ;

    int &ref1 = iar1[0] ;
    // int &ref2 = iar1; // error
    int *ptr1 = iar1;
    //int *ptr2 = iar1[0] ; // error

    delete(iar2) ;
}


