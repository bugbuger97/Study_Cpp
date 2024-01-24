#include <iostream>
using namespace std;

int main(){
    // bool type -> 1byte
    // bool 리터럴 : 작은 숫자를 사용해서 bool 리터럴을 표현할 수 있음. -> 불 자료형을 출력하면, 0 또는 1이 나옴.
    // 0 == false, 0이 아닌 값 == true
    bool what0 = -1234;
    bool what1 = 0;
    bool what2 = -0;
    bool what3 = 5830;
    cout << what0 << endl;
    cout << what1 << endl;
    cout << what2 << endl;
    cout << what3 << endl;
    return 0;
}