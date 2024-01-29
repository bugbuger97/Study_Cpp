// 값으로 전달(pass-by-value)
// pass-by-value 매커니즘은 인수의 값이 복사되어서 매개변수에 할당됨.
/*
1. 리터럴 값 전달
int main(){
    func(10);
    ...
}
void func(int x){ // x라는 매개 변수에 10이 들어감
    ...
}

2. 변수의 값 전달
int main(){
    int x = 10;
    func(x);
    ...
}
void func(int a){ // a라는 매개 변수에 x가 들어감
    ...
}
*/
#include <iostream>
using namespace std;

// declaration function
void func(int a){
    a++;
    cout << "a in func : " << a << endl;
    return;
}

int main(){
    int x = 5;
    func(x);
    cout << "x in main function : " << x << endl;
    return 0;
}
// 전달해야 하는 값이 크다면, 복사하는 작업이 무거워질 수 있음.
// 객체의 크기가 클 때, 값으로 전달 메커니즘을 사용하지 않음.