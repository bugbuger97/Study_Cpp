#include <iostream>
using namespace std;

// 함수 : 모듈화를 시킬 수 있는 기본적인 단위
// 함수의 장점 : 분할 처리, 디버그, 재사용, 함수 라이브러리
// 함수의 이름이 중복이고, 매개변수도 똑같이 되면 안된다. 
int add(int a, int b) // 헤더
{ // 2개의 매개변수를 설정
    return a+b; // 매개변수
}

int main(){
    int x = 5;
    int y = 25;
    cout << add(x,y); // x, y라는 인수를 add()함수로 전달.
    return 0;
}