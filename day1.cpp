#include <iostream>
using namespace std;

int main(){
    // escape char
    cout << "123\n456" << endl; 
    cout << "123\t456" << endl; 
    cout << "123\b456" << endl; // 12456
    cout << "123\r456" << endl; // 456 -> \r의 커서 앞으로 이동 -> 즉, cout << "456" << endl;로 이동함.
    cout << "789\f10" << endl; // 789\n 이후 \t10이 실행되는 현상을 느낌.
    cout << "\'789\'" << endl;
    cout << "\"789\"" << endl;
    return 0;
}