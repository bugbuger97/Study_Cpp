#include <iostream>
using namespace std;

int main(){
    // declaration
    int num;
    // getting input
    cout << "Enter an integer : ";
    cin >> num;
    // control statement
    if (num < 0){
        num = -num;
    }
    cout << "absolute number : " << num << endl;
    return 0;
}