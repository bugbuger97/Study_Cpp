#include <iostream>
using namespace std;

int main(){
    // 원의 면적과 둘레 구하기
    const double PI = 3.141592;
    double radius;

    cout << "Input Radius : ";
    cin >> radius;
    
    // 결과 출력
    cout << "Radius : " << radius << endl;
    cout << "Circumference : " << 2 * PI * radius << endl;
    cout << "Area : " << radius * radius * PI << endl; 
    return 0;
}