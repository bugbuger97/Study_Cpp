#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    int a = 2;
    float b = 3.14;
    cout << a * b << endl; // 표현 범위가 넓은 쪽으로 형변환이 됨.
    cout << typeid(a * b).name() << endl; // float
    return 0;
}