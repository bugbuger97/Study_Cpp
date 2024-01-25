#include <iostream>
#include <typeinfo>
using namespace std;

// 팩토리얼
int factorial(int num){
    if (num == 1 || num == 0){
        return 1;
    }
    else{
        return num * factorial(num-1);
    } 
}
    

int main()
{
    int num;
    do{
        cout << "Input number : ";
        cin >> num;
    }while(num < 0);
    cout << num << "! = " << factorial(num) << endl;
    return 0;
}
