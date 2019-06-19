
#ifndef CPPWS_HEADERGENERAL_H
#define CPPWS_HEADERGENERAL_H

#include <iostream>

// 기본적사용 : extern or prototype
extern int headervar1 ;    // 전역변수 extern
extern int headervar2=10 ; // 전역변수 define & extern
const int headervar3= 10 ; // 전역상수 define
void headerfunc1() ; // function prototype - forward declaration
#define KOREA = "81" ;  . // define 전역상수

/* Rule 에 맞지 않는것 혹은 불가능
using namespace std ;  // namespace 는 끌어들이지 말아라
#include "test1.cpp"  // source 는 끌어들이지 말아아
int headervar4 = 20 ; // 전역변수 - cause redefined
int headerfunc2()={} // 불가능
*/

class cls2 ; // forward declaration for cls1 member
class cls1{ // class declaration  or define
    cls2 *obj1 ;
};

struct struct1{}; // struct declaration  or define

class cls3 ; // forward declaration for ns1 member
namespace ns1{ // namespace declaration
    cls3 *obj2 ;
}

#endif //CPPWS_HEADERGENERAL_H
