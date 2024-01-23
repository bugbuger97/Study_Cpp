// vscode Run 방법 : ctrl + alt + C에 MinGW를 설정 후, ctrl + alt + R을 눌러 실행함.

#include <iostream> // 전처리기 -> 컴파일하기 전에 전처리기가 발생한다.
// 전처리기는 컴파일러가 에러를 잡아주지 않는다.
using namespace std; // std:: 생략 가능 -> 컴파일러에 std:: 라고 힌트를 주는 것 

// int main(){
//     std::cout<<"Hello, "; 
//     std::cout<<"This code is simple program\n"<<std::endl;
//     return 0;
// }

// 주석 처리 방법 1
/* 주석 처리 방법 2 */ 

// int main()
// {
//     // 선언
//     int num0; // 선언만 하는 이유는 쓰지 않는 불필요한 값이 들어가면 메모리를 잡기 때문에 비효율적임.
//     int num1; // 선언만 하면 메모리에 저장되지 않음.
//     int sum;
//     const int num2 = 100; // 상수 선언 -> 언제나 고정적임.
//     // 입력 받기
//     cout << "Input first numer : ";
//     cin >> num0; 
//     cout << "Input second numer : ";
//     cin >> num1;
//     // 합, 합한 결과 변수 sum에 저장
//     sum = num0 + num1 + num2;
//     cout << num0 << " + " << num1 << " + " << num2 << " = " << sum << endl;    
//     return 0;
// }

// int main(){
//     double n0 = 3;
//     const double PI = 3.14;
//     double result;

//     result = static_cast<double>(n0)*static_cast<double>(PI); 
//     // reinterpret_cast : 
//     // static_cast :
//     cout << result << endl; // endl -> l : iong타입으로 계산해라!
//     return 0;
// }

// int main(){
//     char first = 'A';
//     char second = 65; // 아스키 코드를 통해 숫자로 저장되어 있음.
//     cout << "first value : " << "\'" << first << "\'" << endl;
//     cout << "second value : " << second << endl;
//     return 0;
// }

int main(){
    // 변수 선언
    bool a = 123;
    bool b = -8;
    bool c = 0;
    bool d = -0;
    bool e = true;
    bool f = false;
    cout << a << b << c << d << e << f << endl;
    return 0;
}