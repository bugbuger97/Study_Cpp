#include <iostream>
using namespace std;

// endl 조정자 : \n 조정자를 추가하여 줄바꿈을 하게 설계됨.
// bool(noboolalpha, boolalpha)
// noalpha 조정자 : bool 값을 0 또는 1로 출력함. 
// boolalpha 조정자 : bool 값을 리터럴(false 또는 True)로 출력함.

int main(){
    bool a = true;
    bool b = false;
    // 조정자 없이 출력
    cout << "Print of original a : " << a << endl;
    cout << "Print of original b : " << b << endl;
    // 조정자를 사용하여 출력
    cout << "Print a using manipulator : " << boolalpha << a << endl; // bool 조정자 한번만 사용하면 계속 적용됨.
    cout << "Print b using manipulator : " << b << endl;
    return 0;
}