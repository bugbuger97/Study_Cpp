#include <iostream>
using namespace std;

// class header는 클래스라는 키워드 뒤에 클래스의 이름을 붙여서 만듦.
// 보통 클래스의 이름은 첫 글자는 대문자로 하여 라이브러리 클래스와 구분한다.

/*
<헤더>

class Angle
{
    private:
        // 데이터 멤버 선언
        double angle;
    public:
        // 멤버 함수 선언
        double get_angle() const;
        void set_angle(double num);
};
*/

// 접근 제한자(access modifier)
// 접근 권한을 나타낼 때 사용함.
// 클래스에서 데이터 멤버와 멤버 함수를 선언하면, 기본적으로 private 접근 제한자가 붙음.
// private 접근 제한자가 붙으면 해당 요소로부터 값을 추출할 수 없고, 변경할 수도 없음.

// acess modifier in c++
// public(모든 곳에서의 접근 가능) > protected(서브 클래스에서까지만 접근 가능) > private(같은 클래스에서만 접근 가능)

// 인라인(inline) 함수
// 프로그램의 성능을 위해서 컴파일러가 함수 호출 부분을 실제 코드로 대체해버리게 만들고 싶을 때는 inline function을 사용함.

// 암묵적 인라인 함수
// 클래스 정의 내부에 함수를 정의하면, 해당 함수는 인라인 함수가 됨.
// 암묵적 인라인 함수는 거의 쓰지 않음.
// 이유 1. 함수 정의 부분을 읽기 어려움.
// 이유 2. 캡슐화 원칙을 위반.
/*
class Circle{
    // 데이터 멤버
    private:
        double radius;
    public:
        double get_radius() const { return radius; }
};
*/

// 명시적 인라인 함수
// 함수 정의 부분에서 맨 앞에 inline이라고 명시적으로 붙여준다.
/*
inline double Circle::get_radius() const
{
    return radius;
}
*/

// 구조체 
// 구조체의 모든 멤버는 기본적으로 public임.
// 클래스의 모든 멤버는 기본적으로 private임.
/*
<구조체>
struct Name{
    string first;
    char middle;
    string last;
};

<클래스>
class Name{
    public:
        string first;
        char middle;
        string last;
};
*/