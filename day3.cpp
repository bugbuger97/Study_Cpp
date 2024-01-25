#include <iostream>
using namespace std;

// 숫자의 진법을 변경하는 조정자(dec, oct, hex)
// 진법의 접두사를 붙이는 조정자(nonshowbase, showbase)
// 10진수는 아무 것도 붙지 않고, 8진수는 0, 16진수는 0x가 접두사로 붙어서 각각의 진법을 나타냄.

int main(){
    int a = 16;
    // showbase 없이 3개의 숫자를 진법별로 입력하기.
    cout << "dec of a : " << a << endl;
    cout << "oct of a : " << oct << a << endl;
    cout << "hax of a : " << hex << a << endl;
    // showbase를 사용한 상태로 x를 각각의 진법으로 출력
    cout << "dec of a : " << showbase << dec << a << endl;
    cout << "oct of a : " << showbase << oct << a << endl;
    cout << "hax of a : " << showbase << hex << a << endl;  
    return 0;
}