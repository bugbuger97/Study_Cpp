#include <iostream>
#include <limits>
using namespace std;

int main(){
    // overflow : 기존의 최대값을 넘어섰을 때, 발생.
    // underflow : 기존의 최솟값보다 더 작아졌을 때, 발생.

    // 부동 소수점의 오버플로우와 언더 플로우
    double num1 = +numeric_limits<double>::max();
    double num2 = -numeric_limits<double>::max();
    cout << "double type max value : " << num1 << endl;
    cout << "double type min value : " << num2 << endl;
    num1 *= 1000.00;
    num2 *= 1000.00;
    cout << "num1 occurs overflow : " << num1 << endl;
    cout << "num2 occurs underflow : " << num2 << endl;
    return 0;
}