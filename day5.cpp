#include <iostream>
using namespace std;

// pass-by-pointer
// 포인터로 전달 메커니즘은 인수로 메모리 주소를 매개변수에 전달하는 것임.
// 주소를 전달하므로 매개변수를 사용해서 인수의 메모리 위치에 접근할 수 있음.
// c++에서는 참조로 전달 메커니즘이 있어서, 포인터로 전달 메커니즘은 거의 사용되지 않음.
// 포인터로 전달 메커니즘은 참조로 전달 메커니즘과 같은 특징을 가짐.

// return-by-value
// 호출되는 함수쪽에서 어떤 표현식을 생성하고, 이를 리턴함.
// 함수를 호출하면 값이 리턴되기에, 값이 필요한 위치에 함수를 활용함.
bool isOdd(int num){
    return (num % 2 == 1); // 리터럴 값 리턴
    // 리터럴 :  코드의 고정된 값을 나타내는 표기법
}

int main(){
    cout << boolalpha << isOdd(2) << endl;
    cout << boolalpha << isOdd(9) << endl;
    return 0;
}