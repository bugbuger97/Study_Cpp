#include <iostream>
using namespace std;

int func(int x){ // 매개변수
    return x;
}

int main(){
    // parameter : 변수를 할당할 때, 왼쪽에 위치하는 변수
    // argument : 오른쪽에 위치하는 값
    int a = 5;
    cout << func(a); // 인수
    return 0;
}