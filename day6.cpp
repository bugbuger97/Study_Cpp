// 클래스 설계 멤버 그룹
// 1. 인스턴스 멤버
// 2. 클래스 멤버

/*
<인스턴스 멤버>
인스턴스 데이터 멤버는 인스턴스의 속성을 정의함.
각각의 객체는 클래스에 정의된 멤버들을 캡슐화해야 함.
캡슐화로 인해 인스턴스끼리는 서로 접근할 수 없음.
(캡슐화 : 객체별로 메모리 영역을 할당하므로, 각 영역에서 객체마다 서로 다른 데이터를 갖는 속성을 의미함.)

인스턴스 멤버 함수 : 인스턴스의 행위를 의미 -> 객체의 인스턴스 데이터 멤버를 조작하기 위해 사용함.
(인수턴스 데이터 멤버는 모든 객체가 개별적으로 갖지만, 데이터 멤버함수는 메모리 위에 하나만 올라가며, 모든 인스턴스가 공유함.)

인스턴스 멤버 함수가 this 포인터에 객체의 주소를 할당할 수 있는 이유 : 컴파일러가 멤버함수의 매개변수에 this키워드를 자동으로 추가함.
int get_num() const
{
    return num;
}

int get_num(Number* this) const
{
    return (this -> num);
}

위 아래의 코드는 같음
(-> 연산자 : 간접 참조 연산자(indirection operator)와 멤버 선택 연산(member operation이 조합된 연산자임.))

void Circle::set_radius(double radius)
{
    this->radius = radius;
}

<클래스 불변 속성>
클래스 불변 속성(class invariant) : 클래스의 데이터 멤버의 일부나 전체에 적용해야하는 조건을 말함.

#include <cassert>
assert 함수 : 매개변수가 true면 아무 일도 일어나지 않지만, 매개변수가 false이면 프로그램을 중단함. 
*/

#include <iostream>
#include <cassert>
using namespace std;

class Rectangle
{
    private:
        // 데이터 멤버
        double length;
        double height;
    public:
        Rectangle(double length, double height); // 생성자
        Rectangle(const Rectangle& r); // 복사 생성자
        ~Rectangle(); // 소멸자
        void print() const; //접근자 멤버
        double get_area() const; // 접근자 멤버
        double get_perimeter() const; // 접근자 멤버
};

Rectangle::Rectangle(double len, double hgt)
: length(len), height(hgt)
{
    if((length <= 0.0) || (height <= 0.0)){
        cout << "Don't construct rectangle instance" << endl;
    }
}
Rectangle::Rectangle(const Rectangle& r)
: length(r.length), height(r.height)
{}
Rectangle::~Rectangle()
{}
void Rectangle::print() const{
    cout << length << ", " << height << endl;
}
double Rectangle::get_area() const{
    return (length * height);
}
double Rectangle::get_perimeter() const{
    return (2* (length + height));
}

int main(){
    Rectangle r1(3.0,4.0);
    Rectangle r2(5.0,5.0);
    Rectangle r3(r2);

    cout << "< Rectangle 1 >" << endl;
    r1.print();
    cout << "Area : " << r1.get_area() << endl;
    cout << "Perimeter : " << r1.get_perimeter() << endl;
    
    cout << "< Rectangle 2 >" << endl;
    r2.print();
    cout << "Area : " << r2.get_area() << endl;
    cout << "Perimeter : " << r2.get_perimeter() << endl;
    
    cout << "< Rectangle 3 >" << endl;
    r3.print();
    cout << "Area : " << r3.get_area() << endl;
    cout << "Perimeter : " << r3.get_perimeter() << endl;
    return 0;
}