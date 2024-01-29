#include <iostream>
using namespace std;

// class
// type : 추상화된 것
// instance : 타입을 실체화한 구체적인 실체가 있는 것 (객체)
// attribute : instance가 가지는 특성 (클래스 안의 변수들) -> 변수 == 데이터 멤버
// behavior : instance가 스스로 할 수 있는 작업 (클래스 안의 메소드들) -> 메소드 == 멤버 함수

// 객체(인스턴스) : 클래스를 기반으로 만든 인스턴스
// 객체의 속성, 행위는 데이터 멤버, 멤버 함수로 만듦.

// 데이터 멤버 : attribute를 표현하기 위한 변수
// 멤버 함수 : 객체의 행위(기능의 모임)

// 클래스 정의 (데이터 멤버, 멤버 함수 선언)
class Circle{
    private:
        double radius;
        const double PI = 3.141592;
    public:
        double get_radius() const; // const -> 객체 속성 고정 : 멤버 변수를 바꿀 수 없음.
        double get_area() const;
        double get_perimeter() const;
        void set_radius(double value);
};

// 멤버 함수 정의
double Circle::get_radius() const{
    return radius;
}
double Circle::get_area() const{
    return (PI * radius * radius);
}
double Circle::get_perimeter() const{
    return (2 * PI * radius);
}
void Circle::set_radius(double value){
    radius = value;
}

// application part
int main(){
    cout << "<instance c1>" << endl;
    Circle c1;
    c1.set_radius(20.0);
    cout << "area = " << c1.get_area() << endl;
    cout << "perimeter = " << c1.get_perimeter() << endl;
    cout << "radius = " << c1.get_radius() << endl << endl;

    cout << "<instance c2>" << endl;
    Circle c2;
    c2.set_radius(10.0);
    cout << "area = " << c2.get_area() << endl;
    cout << "perimeter = " << c2.get_perimeter() << endl;
    cout << "radius = " << c2.get_radius() << endl << endl;

    cout << "<instance c3>" << endl;
    Circle c3;
    c3.set_radius(1.0);
    cout << "area = " << c3.get_area() << endl;
    cout << "perimeter = " << c3.get_perimeter() << endl;
    cout << "radius = " << c3.get_radius() << endl<< endl;

    cout << "<instance c4>" << endl;
    Circle c4;
    c4.set_radius(5.0);
    cout << "area = " << c4.get_area() << endl;
    cout << "perimeter = " << c4.get_perimeter() << endl;
    cout << "radius = " << c4.get_radius() << endl;
    return 0;
}