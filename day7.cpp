// 객체 지향 패러다임 -> 파일 분할
// 파일 분할은 3개로 나뉨.
// 1. 인터페이스 파일 (클래스 정의 : Number.h -> 헤더파일 의미)
// 2. 구현 파일 (멤버 함수 정의 : Number.cpp)
// 3. 애플리케이션 파일 (application : Number.cpp)

#include "circle.h"
#include "circle.cpp"

int main(){
    Circle c1(5.2);
    cout << "Radius : " << c1.get_Radius() << endl;
    cout << "Area : " << c1.get_Area() << endl;
    cout << "Perimeter : " << c1.get_Perimeter() << endl << endl;
    Circle c2(c1);
    cout << "Radius : " << c2.get_Radius() << endl;
    cout << "Area : " << c2.get_Area() << endl;
    cout << "Perimeter : " << c2.get_Perimeter() << endl << endl;
    Circle c3;
    c3.set_Radius(1);
    cout << "Radius : " << c3.get_Radius() << endl;
    cout << "Area : " << c3.get_Area() << endl;
    cout << "Perimeter : " << c3.get_Perimeter() << endl << endl;
    return 0;
}