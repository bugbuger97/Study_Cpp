#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// 숫자에서 정수 부분과 소수 부분을 분리해서 추출하는 프로그램
// int main(){
//     // declaration
//     double num;
//     int integer_part;
//     double fract_part;
//     // Input
//     cout << "Input floationg point number : ";
//     cin >> num;
//     integer_part = static_cast<int>(num);
//     fract_part = num - integer_part;
//     cout << fixed << showpoint << setprecision(4);
//     cout << "original value : " << num << endl;
//     cout << "Integer part : " << integer_part << endl;
//     cout << "Fract part : " << fract_part << endl;
//     return 0;
// }

// 입력된 정수의 첫번째 자리 추출하기
// int main(){
//     int num;
//     cout << "Input number : ";
//     cin >> num;
//     num >= 10 ? cout << "first number : " << num % 10 << endl : cout << "first number : " << num << endl; 
//     return 0;
// }

// 입력된 정수의 모든 자릿수를 추출해서 출력하는 프로그램으로 확장하기
int size_of_integer(int num)
{
    int position = 1, i;


    if (num < 0) num *= (-1);

    for (i = 0; ; i++, position++)
    {
        if ((num /= 10) <= 0)
            break;
    }
    return(position);
}

int main(){
    long int num;
    cout << "Input integer : ";
    cin >> num;
    int i;
    long int temp = pow(10,size_of_integer(num));
    for (i = size_of_integer(num); i > 0; i--){
        temp /= 10;
        cout << i << " position value : " << static_cast<int>(num/temp) << endl;
        num %= temp;  
    }
    return 0;
}

// 초 단위의 시간을 시, 분, 초 단위로 나누어서 변환하기
// int main(){
//     int second;
//     cout << "Input second : ";
//     cin >> second;
//     if (second > 3600){
//         cout << static_cast<int>(second / 3600) << " Hour ";
//         second %= 3600;
//     }
//     if (second > 60){
//         cout << static_cast<int>(second / 60) << " Minute ";
//         second %= 60;
//     }
//     cout << second << " Second " << endl;
    
//     return 0;
// }