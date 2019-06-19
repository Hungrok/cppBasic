// to test class constructor & operator

#include "classconstope.h"
#include <iostream>

void classConstOpeTest() {
    // constructor, we can use ()
    ConstOpeCls1 obj1 = ConstOpeCls1{} ; // default constructor {10,20}
    ConstOpeCls1 obj2 = ConstOpeCls1{30,60} ; // parameterized constructor
    ConstOpeCls1 obj3 = ConstOpeCls1{obj2} ; // copy constructor
    ConstOpeCls1 &&obj4 = ConstOpeCls1{obj1} ; // move constructor with rvalue reference

    obj3.method1() ; // {30,60}
    obj4.method1() ; // {10,20}

    ConstOpeCls1 obj5 = obj1 ; // overloading operator (assignment)
    ConstOpeCls1 obj6 = obj1 + obj2 ;  // overloading operator (arithmetic)
    ConstOpeCls1 obj7 = obj1 * obj2 ;  // overloading operator (arithmetic)
    if (obj5 != obj6){}  // overloading operator (relational)
    if (obj6 <= obj7){}  // overloading operator (relational)
    if (obj5 == obj6){}  // overloading operator (relational)
    if (obj6 >= obj7){}  // overloading operator (relational)

}