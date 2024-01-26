#include <iostream>
using namespace std;

// 클래스 -> 타입으로 취급함.
// 클래스를 만들었다면, 같은 타입의 다양한 인스턴스(객체) 생성가능함.
// 타입과 인스턴스의 관계는 일 대 다 관계임.
// 실체화 되었다. == 메모리에 잡혔다.
// 하나의 타입을 기반으로 많은 인스턴스를 생성할 수 있음.

// 속성 : 인스턴스가 가지는 특징을 의미함.
// 행위 : 인스턴스는 어떤 행위(== function)를 가짐. -> 어떤 인스턴스가 스스로 할 수 있는 작업 또는 연산을 말함.

// 객체의 속성과 행위는 데이터 멤버, 멤버함수로 만듦.
// 멤버함수 : 프로그래밍에서 함수는 어떤 행위를 할 수 있는 기능의 모임임.
// 객체의 행위는 멤버 함수를 사용해서 구현함.

// 객체 지향 프로그래밍
// 타입 또는 클래스
// 인스턴스
// 데이터 멤버
// 멤버 함수

// 클래스의 구조
// 클래스 정의 -> 속성과 행위 선언
// 멤버 함수 정의 -> 행위 정의
// 애플리케이션 -> 객체를 인스턴스화하고 사용

// 클래스 정의
// 데이터 멤버와 멤버함수를 선언
class Circle{
    private:
        double radius; // 데이터 멤버
    public: // 멤버 함수
        double get_radius() const;
        double get_area() const;
        double get_perimeter() const;
        void set_radius(double value);
};
// 멤버 함수 정의 부분
double Circle::get_radius() const{
    return radius;
}

double Circle::get_area() const{
    const double PI = 3.14;
    return (PI * radius * radius);
}

double Circle::get_perimeter() const{
    const double PI = 3.14;
    return (2 * PI * radius);
}

void Circle::set_radius(double value){
    radius = value;
}

// 애플리케이션 부분
// 클래스를 인스턴스화해서 객체를 만들고 활용
int main(){
    cout << "Circle 1" << endl;
    Circle c1;
    c1.set_radius(10.0);
    cout << "Radius : " << c1.get_radius() << endl;
    cout << "Area : " << c1.get_area() << endl;
    cout << "Perimeter : " << c1.get_perimeter() << endl << endl;

    cout << "Circle 2" << endl;
    Circle c2;
    c2.set_radius(20.0);
    cout << "Radius : " << c2.get_radius() << endl;
    cout << "Area : " << c2.get_area() << endl;
    cout << "Perimeter : " << c2.get_perimeter() << endl;
    return 0;
}