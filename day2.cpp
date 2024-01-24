#include <iostream>
using namespace std;

int main(){
    // sizeof expression : 표현식의 크기나 자료형의 크기를 확인할 때, 사용하는 연산자임.
    cout << sizeof(int) << endl; // 4bytes -> 자료형의 크기 구하기
    cout << sizeof 'a' << endl; // 1byte -> 표현식 구하기 
    return 0;
}