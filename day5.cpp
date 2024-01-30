#include <iostream>
using namespace std;

// 생성자란? -> 클래스의 특별한 멤버 함수
// 객체를 생성하는 특별한 멤버 함수
// 리턴값이 없음
// 생성자의 이름이 클래스의 이름과 같음.
// 즉, 생성자는 객체를 생성하고 데이터 멤버를 초기화하는 역할을 하게 설계되었고, 리턴값을 가질 수 없음.
// 유효성 검사 가능 -> 이 모든 과정은 초기화의 일부일 뿐임.
// 생성자 종류
// 1. 매개변수가 있는 생성자, 2. 기본 생성자, 3. 복사 생성자

// 생성자 선언
// 생성자 : 클래스의 멤버 함수이고 클래스 정의에서 선언을 해주어야 함.
// 생성자는 데이터 멤버를 초기화하는 변경 작업을 하므로 const 한정자를 붙일 수 없음.
// 생성자에는 일반적으로 public을 적용하여, application에서 생성자를 활용해 객체를 생성하고 초기화 할 수 있게 됨.

/*
class Circle{
    public:
        Circle(); // 매개변수가 있는 생성자
        Circle(double radius); // 기본 생성자
        Circle(const Circle& circle); // 복사 생성자
}
*/

// 매개변수가 있는 생성자(parameter constructor)
// 데이터 멤버를 지정된 값으로 초기화하기 위해 사용함.
// 오버로드할 수 있고 시그니처가 다르면서 여러 개의 매개변수가 있는 생성자를 가질 수 있음.

// 기본 생성자(default constructor)
// 매개변수가 없는 생성자
// 모든 데이터 멤버를 리터럴 값으로 초기화할 때 사용함.
// 매개변수 목록 자체가 없으므로 오버로드할 수 없음.

// 복사 생성자(copy constructor)
// 객체의 데이터 멤버를 이전 다른 객체와 동일한 값으로 초기화하고 싶을 때 사용함.
// 매개변수로 복사 생성자와 같은 객체의 참조를 하나 받는다.
// 매개변수 앞에 const 한정자를 붙이는데, 이것은 원본 객체를 변경하지 못하게 하기 위해 붙이는 것임.
// 복사 생성자의 매개변수는 참조로 전달 메커니즘으로 이루어짐.

// 참조로 전달 메커니즘 특징
// 특징 1. 객체를 물리적으로 복사하지 않는다는 것임.
// 특징 2. 전달된 레퍼런스(별칭)로 값을 변경할 수 있다는 것임.

// 복사 생성자에서는 const 한정자를 붙여서 값을 변경하지 못하게 하기에 참조로 전달 메커니즘 특징 1만 가지게 된다.
// 복사 생성자는 매개 변수 목록의 형태가 고정되어 있으므로, 오버로드할 수 없다

// 생성자의 정의
/*
1. 기본 생성자의 정의 

Circle::Circle()
: radius(1.0) // 초기화 리스트 (이것을 생략하면 데이터 멤버에 쓰레기 값이 들어감. 꼭 쓰는 것을 권장함.)
{
    // contents
}
*/

/*
2. 매개변수가 있는 생성자의 정의 

Circle::Circle(double r)
: radius(r) // 초기화 리스트
{
    // contents
}
*/

/*
3. 복사 생성자의 정의 

Circle::Circle(const Circle& cr)
: radius(cr.radius) // 초기화 리스트
{
    // contents
}
*/

// 생성자와 일반적 멤버함수 정의의 차이
// 차이는 생성자는 함수 헤더 뒤에 초기화 리스트(initialization list)라는 문법을 사용해서 데이터 멤버를 초기화할 수 있음.
// : 데이터 멤버(매개변수), 데이터 멤버(매개변수), .....
// 매개변수의 이름은 개발자가 임의로 작성하면 됨.

// 소멸자의 특징
// 특징 1. 소멸자의 이름은 클래스 이름 앞에 물결 기호(~)가 붙은 형태임.
// 특징 2. 리턴값을 가질 수 없음.
// 소멸자는 객체가 스코프를 벗어나면 자동적으로 호출됨.
// 소멸자는 별도의 매개변수를 가질 수 없으므로 오버로드할 수 없음.
// 소멸자는 public을 적용해야 함.

// 소멸자 선언
/*
class Circle
{
    public:
        ~Circle(); // 소멸자
}
*/

// 소멸자 정의
/*
Circle::~Circle(){
    // contents
}
*/

// 클래스 정의
// 생성자, 소멸자, 멤버 함수 선언
class Circle{
    private:
        double radius;
    public:
        Circle(double radius); // parameter constructor
        Circle(); // basic constructor
        ~Circle(); // 소멸자
        Circle(const Circle& circle); // copy constructor
        void set_radius(double radius); // 설정자
        double get_radius() const; // 접근자
        double get_area() const; // 접근자
        double get_perimeter() const; // 접근자
};

// 생성자, 소멸자, 멤버함수 정의
Circle::Circle(double r)
: radius(r)
{
    cout << "Call parameter constructor" << endl;
}
Circle::Circle()
: radius(0.0)
{
    cout << "Call basic constructor" << endl;
}
Circle::Circle(const Circle& circle)
: radius(circle.radius)
{
    cout << "Call copy constructor" << endl;
}
Circle::~Circle()
{
    cout << "Call destructor : " << radius << endl;
}
void Circle::set_radius(double value){
    radius = value;
}
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
// Application
int main(){
    Circle c1(5.2);
    cout << "Radius : " << c1.get_radius() << endl;
    cout << "Area : " << c1.get_area() << endl;
    cout << "Perimeter : " << c1.get_perimeter() << endl << endl;
    Circle c2(c1);
    cout << "Radius : " << c2.get_radius() << endl;
    cout << "Area : " << c2.get_area() << endl;
    cout << "Perimeter : " << c2.get_perimeter() << endl << endl;
    Circle c3;
    cout << "Radius : " << c3.get_radius() << endl;
    cout << "Area : " << c3.get_area() << endl;
    cout << "Perimeter : " << c3.get_perimeter() << endl << endl;
    return 0;
}