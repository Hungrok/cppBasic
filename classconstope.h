
#ifndef CPPWS_CLASSCONSTOPE_H
#define CPPWS_CLASSCONSTOPE_H

#include <iostream>

class ConstOpeCls1{
private:
    int var1 ;
    int var2 ;
public:
    ConstOpeCls1(): var1(10), var2(20) {}// default constructor
    ConstOpeCls1(int a, int b): var1(a), var2(b) {}// parameter constructor
    // copy constructor
    ConstOpeCls1(const ConstOpeCls1& copy): var1(copy.var1), var2(copy.var2){}
    // move constructor
    ConstOpeCls1(ConstOpeCls1&& move):
            var1(std::exchange(move.var1,0)),var2(std::exchange(move.var2,0)){}

    void method1(){ std::cout << "var1=" <<var1 <<"var2=" << var2 << std::endl;}

    // should be in class
    ConstOpeCls1 operator=(const ConstOpeCls1& assign){}
    ConstOpeCls1 operator+(const ConstOpeCls1& plus){
        ConstOpeCls1 obj1 = ConstOpeCls1() ; return obj1 ; }

    ConstOpeCls1 operator*(const ConstOpeCls1& multiply){
        ConstOpeCls1 obj1 = ConstOpeCls1() ; return obj1 ; }
    // As member function (one parameter)
    bool operator!=(const ConstOpeCls1& nequal){return true;}
    bool operator<=(const ConstOpeCls1& lte){return true;}

};
// As free function (two parameter)
bool operator==(const ConstOpeCls1& equal1, const ConstOpeCls1& equal2){return true;}
bool operator>=(const ConstOpeCls1& gt1, const ConstOpeCls1& gt2){return true;}



#endif //CPPWS_CLASSCONSTOPE_H
