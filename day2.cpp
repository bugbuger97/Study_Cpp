#include <iostream>
using namespace std;

int main(){
    // !(x && y) == (!x || !y)
    // !(x || y) == (!x && !y)

    // if 블럭과 else 블럭 우치 바꾸기
    /*
    // original code
    if (x){
    }
    else {문장};
    
    // 블럭 위치 바꾸기
    if (!x){
        문장;
    } 
    else{
    }

    // 간단하게 만들기
    if(!x){
        문장;
    }
    */

    // swich statement
    int day;
    cout << "Enter a number : ";
    cin >> day;

    switch(day){
        case 0: cout << "Sunday" << endl;
        case 1: cout << "Monday" << endl;
        case 2: cout << "Tuesday" << endl;
        case 3: cout << "Wendnesday" << endl;
        case 4: cout << "Thursday" << endl;
        case 5: cout << "Friday" << endl;
        case 6: cout << "Saturday" << endl;
        default: cout << "vacation" << endl;
    }
    return 0;
}