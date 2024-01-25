#include <iostream>
#include <typeinfo>
using namespace std;

// return 구문은 현재 함수를 종료하고 함수를 호출한 쪽으로 제어를 리턴함.
// return 구문을 사용하면, 반복문이 종료되며, 동시에 반복문이 소속된 함수(main 함수 등)도 종료됨.

// 소수인지 확인하는 프로그램
bool isPrime(int num){
    if (num == 1){
        return false;
    }
    else{
        for (int i=2; i<num; i++){
            if (num % i == 0){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int num;
    do{
        cout << "Input number : ";
        cin >> num;
    }while(num <= 0);

    if (isPrime(num)){
        cout << num << " is Prime number!" << endl;
    }
    else{
        cout << num << " is not Prime number!" << endl;
    }
    return 0;
}
