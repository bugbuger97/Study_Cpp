#include <iostream>
using namespace std;

// scope : 소스 코드 내부에서 어떤 entity(상수, 변수, 객체, 함수) 사용할 수 있는 범위를 나타냄.
// local scope : entity of local scope는 선언된 위치 ~ 블록이 끝나는 부분(줄괄호 끝) 내부에서 사용할 수 있음.

// scope resolution operator

int num = 10; // 전역 변수
int main(){ 
    int num = 500; // 지역 변수
    cout << "global var = " << ::num << endl; // 10
    cout << "logical var = " << num << endl; // 500
}