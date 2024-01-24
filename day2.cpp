#include <iostream>
using namespace std;

int main(){
    // 조건문에 괄호를 생략한 경우
    int x = 0;
    bool statement1 = true;
    bool statement2 = false;
    if (x == 0)
        cout << statement1 << endl; // statement1 is exexuted if x is 0
        cout << statement2 << endl; // statement2 is always executed
    /*
    if (x == 0) cout << statement1 << endl; 
    cout << statement2 << endl; // 위의 코드는 이런 식으로 실행됨.
    */
    return 0;
}