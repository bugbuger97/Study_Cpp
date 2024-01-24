#include <iostream>
using namespace std;

int main(){
    // 삼항 연산자
    // 조건 ? 표현식1 : 표현식2
    // 조건이 true이면, 표현식1
    // 조건이 false이면, 표현식2
    int x = 6;
    bool result = x>5 ? true : false;
    cout << result << endl;
    result ? cout << "x > 5" << endl : cout << "x <= 5" << endl;
    return 0;
}