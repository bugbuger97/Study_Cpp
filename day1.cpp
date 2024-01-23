#include <iostream>
using namespace std;

int main(){
    // 문자 자료형 : 1 byte by ASCII incoding system -> 0 ~ 127 범위의 정수를 사용해서 128개의 글자를 정의하고 있음.
    char A;
    char a;
    A = 65;
    a = 97;
    cout << "65 of ASCII : " << A << endl;
    cout << "97 of ASCII : " << a << endl;

    // 문자 리터널 
    // -> method 1 : ASCII Table 안의 글자를 작은 따옴표 안에 넣어 사용함.
    char alphabet = 'B';
    // -> method 2 : ASCII Table 안의 정수 값을 사용함.
    char Alphabet = 98;
    cout << alphabet << endl;
    cout << Alphabet << endl;
    return 0;
}