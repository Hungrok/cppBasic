// to test function

#include <iostream>
#include <functional>

int sum1 (int a, int b ){ return a+b ;} // normal function, return should be
std::function<int(int, int)> sum2 ; // anonymous function , used function-type at parameter
//int sum3 = [](int a, int b) -> int { a + b; }; // lambda function - ERROR ?
auto sum3 = [](int a, int b) { return a + b; }; // lambda function
// function parameter as call-by-pointer
void ope1 (int x, int y, int (*func)(int,int)){
    int sum = (*func)(x,y) ;
    std::cout << "ope1 sum=" <<sum << std::endl;
}
// function parameter as call-by-reference
void ope2 (int x, int y, int (&func)(int,int)){
    int sum = (func)(x,y) ;
    std::cout << "ope2 sum=" <<sum << std::endl;
}
// function parameter as value
void ope3 (int x, int y, int (func)(int,int)){
    int sum = (func)(x,y) ;
    std::cout << "ope3 sum=" <<sum << std::endl;
}
// function parameter with anonymous function
void ope4 (int x, int y, std::function<int(int, int)> sumfunc){
    int sum = (sumfunc)(x,y) ;
    std::cout << "ope4 sum=" <<sum << std::endl;
}


void functionTest() {

    sum1(2,3) ; // can call
    // sum2 (2,3) ; // CAUSE abort
    sum3(2,3) ; // can call
    ope1(2,3,&sum1) ; // should be & - call by pointer
    ope1(2,3,sum3) ; // should be - call by pointer
    ope1(2,3,[](int a, int b) { return a + b; }) ; // pass by lambda-expression
    ope2(2,3,sum1) ; // should be - call by value --> reference
    // ope2(2,3,sum3) ; // Can't
    // ope2(2,3,[](int a, int b) { return a + b; }) ; // Can't
    ope3(2,3,sum1) ; // call by value
    ope3(2,3,sum3) ; // call by value
    ope3(2,3,[](int a, int b) { return a + b; }) ; // pass by lambda-expression

    ope4(2,3,sum1) ;
    ope4(2,3,sum3) ;
    ope4(2,3,[](int a, int b) { return a + b; }) ; // pass by lambda-expression
}

