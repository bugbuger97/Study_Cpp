#include <iostream>
using namespace std;

// 고정 소수점 출력 조정자와 과학 표기법 출력 조정자(fixed, scientific)

// 1. 부동 소수점 자료형을 출력할 때, 고정 소수점(fixed format)을 사용하는 방법
// 고정 소수점 형식
// 부호 / 정수 부분 / . / 소수점 아래 부분 

// 2. 부동 소수점 자료형을 출력할 때, 과학 표기법(scientific) 표기법을 사용하는 방법
// 과학 표기법 형식
// 부호 / 정수 부분이 한자리로 고정 / e 또는 E / 지수 부호 / 지수

// 소수점 아래 부분을 출력하는 조정자(showpoint)
int main(){
    // declaration
    double a = 144;
    double b = 314.1592;
    // fixed와 showpoint 조정자 사용
    cout << "Fixed format of a : " << a << endl;
    cout << "Fixed format of a : " << showpoint << a << endl;
    // scientific 조정자 사용
    cout << "Scientific format of b : " << scientific << b << endl;
    return 0;
}