// 양수 부호를 붙이는 조정자(showpos)
// C++은 숫자가 양수일때, + 부호를 출력하지 않지만, showpos 조정자를 사용하면, 양수일때도 양수 기호를 출력함.

// 숫자 관련 문자를 대문자로 출력하는 조정자(uppercase)
// 16진수로 정수를 출력할 때, 알파벳이 추력되고 부동 소수점의 과학 표기법 때도 e가 출력되는데, 이러한 문자를 대문자로 변경하여 출력하게 함.

// 숫자의 배치를 조정하는 조정자(left, internal, right)
// 숫자 배치 조정
// @@@@@@@@ (@ == padding)
// -1234@@@ (left)
// -@@@1234 (internal)
// @@@-1234 (right) 

// 매개변수가 있는 조정자
// #include <iomanip> 이라는 전처리기 사용

// setprecision(n) 조정자
// 고정 소수점 출력 방식(과학 표기법 출력 방식 제외)에서만 사용함.
// 괄호 안의 정수(n)로 소수점 뒤의 몇 자리까지 출력할지를 지정함.

// setw(n) 조정자 
// 고정 소수점 출력 방식(과학 표기법 출력 방식 제외)에서만 사용함.
// n은 전체 필드 크기를 의미하고, 이때 필드 크기는 정수 부분, 소수점, 소수점 아래 부분을 모두 합친 길이임.
// setw 조정자는 출력 스트림의 상태를 변경하지 않음. 필요할 때마다 사용함.
// setw 조정자 빼고는 매개변수가 있는 조정자 모두 출력 스트림의 상태를 변경함.

// setfill(ch) 조정자
// 필드의 크기가 실제 출력되는 내용보다 클 때, 발생하는 패딩을 어떤 문자로 채울지 지정할 때 사용함.
// left, center, right, setw 등 조합하여 사용함.

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // declaration
    double a = 314.1592123457;
    // 기본 출력 방식 조정
    cout << fixed << setprecision(7) << showpos << setfill('*') << a << endl;
    // a를 3가지 형식으로 출력
    cout << setw(15) << left << setfill('*') << a << endl;
    cout << setw(15) << internal << setfill('*') << a << endl;
    cout << setw(15) << right << setfill('*') << a << endl;
    return 0;
}