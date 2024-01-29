#include <iostream>
using namespace std;

// function overloading
// 이름이 같은 함수가 2개 이상일 때, 매개변수의 자료형, 개수, 순서가 다르다면 사용 가능함. -> 함수 오버로딩
int min(int a, int b){
    if (a > b){
        return b;
    }
    else{
        return a;
    }
}
int min(int a, int b, int c){
    int arr[3] = {a,b,c};
    int temp = arr[0];
    for (int i=0; i < 3; i++){
        if (temp > arr[i]){
            temp = arr[i];
        }
    }
    return temp;
}

int min(int a, int b, int c, int d){
    int arr[4] = {a,b,c,d};
    int temp = arr[0];
    for (int i=0; i < 3; i++){
        if (temp > arr[i]){
            temp = arr[i];
        }
    }
    return temp;
}

int main(){
    cout << "min(5,7) = " << min(5,7) << endl;
    cout << "min(10,1,9) = " << min(10,1,9) << endl;
    cout << "min(100,99,67,87) = " << min(100,99,67,87) << endl;
    return 0;
}