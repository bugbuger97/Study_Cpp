#include <iostream>
using namespace std;

// static local variable : static 변경자를 앞에 붙여서 만듦. -> 프로그램이 종료되기 전까지 유지됨.
// static local variable는 딱 1 번만 초기화 되며 프로그램이 실행되는 동안에 프로그램이 메모리 위의 변수를 추적함. 
// 메인에서 함수를 여러 번 호출하면, 모든 함수들이 같은 변수를 공유함. 
void func(){
    static int cnt = 0; // 명시적 정적 변수
    ++cnt;
    cout << "cnt = " << cnt << endl;
    cnt++;
}

int main(){
    func();
    func();
    func();
    return 0;
} 