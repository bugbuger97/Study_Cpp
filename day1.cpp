#include <iostream>
using namespace std;

int main(){
    unsigned short int n0 = -1; // unsigned short int -> 0 ~ 65,536
    unsigned int n1 = -1; // unsigned int -> 0 ~ 4,294,967,295
    cout << n0 << endl;
    cout << n1 << endl;
    // 정수 리터럴 : 프로그램에서 어떤 자료형의 값을 고정하여 사용.
    cout << 1234 << endl; // int
    cout << 1234U << endl; // unsigned int
    cout << 1234L << endl; // long int
    cout << 1234UL << endl; // unsigned long int
    return 0;
}