// to test TEMPLATE

#include <iostream>
// Template : class, function 이 지니는 멤버들에 적용되는 임의의 원소기호
// parameter (선언), parameterized (확정 - 객체화시 혹은 function 사용시)
// parameter 선언시 4가지 로 구분
// 1. non-type template : data type 이 아닌 멤버에 적용되는 runtime constant (예. array size)
// 2. type template
// 3. 2를 특수화 (명시적, 부분)
// 4. 2를 parameter 에 포함 (template-template)

// 1. non-type template
template <int size> class ClassA{};
// 2. type template --> primary template class
template<typename T1, typename T2> class ClassB{}; // Primary template class
// 3. 특수화 (primary template class 를 대상으로)
template<typename T3> class ClassB<T3, std::string> {}; // 앞에것은 template ,뒤에것은 명시적
// 4. template-template (primary template class 를 포함)
template <typename T1, template<typename> class C = ClassB> class ClassC{};
