#include <iostream>
using namespace std;

// pass-by-reference : 참조로 전달 -> 인수와 매개변수는 메모리 위치를 공유함.
void func(int& y); // & : y가 참조라는 것을 나타냄.

int main(){
    int x = 10;
    func(x);
    cout << "x in main function = " << x << endl;
    return 0;
}

void func(int& y){
    y++;
    cout << "y in func function = " << y << endl;
}
// 참조로 전달 == read-write access
// 호출되는 함수에서 인수를 읽고 쓸 수 있음.
// 값으로 전달(pass-by-value)을 사용하면 원본에 접근할 수 없으므로 함수 호출로 swap할 수 없음