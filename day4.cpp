#include <iostream>
using namespace std;

// 데이터 멤버 선언
// 클래스 정의의 첫 번째 부분 : 데이터 멤버를 선언하는 부분임.
// 내장 자료형으로 만들 수 있고, 이전에 정의한 다른 클래스로도 만들 수 있음.
// 클래스의 속성을 구현하는데 사용할 것들을 데이터 멤버로 만듦. 

// 인라인 함수
// 프로그램의 성능을 위해서 컴파일러가 함수 호출 부분을 실제 코드로 대체해버리게 만들고 싶을 때는 함수를 인라인 함수로 선언함.
// 헤더 파일에 정의부가 보여야 함.

//암묵적 인라인 함수
// 밑의 코드처럼 클래스 정의 내부에 함수를 정의하면, 해당 함수는 인라인 함수가 됨.
/*
class Cirecle{
    private:
        double radius;
    public:
        double get_radius() const {return radius};
};
*/

// 객체 인스턴스화 : 멤버 함수를 사용하려면, Circle c1; -> 반드시 객체를 인스턴스화 해줘야 함.
// c1.get_radius에서의 .은 member selection operator이라고 함.

// 구조체 
// 구조체의 모든 멤버는 기본적으로 public임.
// 클래스의 모든 멤버는 기본적으로 private임.

// 생성자와 소멸자
// 객체가 데이터 멤버를 갖고 어떤 작업을 하려면, 객체를 만든 뒤 데이터 멤버를 초기화하는 작업이 필요함.
// 객체는 생성자(constructor)라고 부르는 특수한 멤버 함수가 호출될 때, 생성됨.
// 생성자(constructor)는 클래스의 멤버 함수이므로 클래스 정의에서 선언됨.
// 생성자에서는 데이터 멤버를 초기화하는 변경 작업을 하므로 const 한정자를 붙일 수 없음.
// 생성자는 특별한 멤버함수, 리턴값을 가질 수 없으며, 이름은 클래스의 이름과 같음.
// 소멸자(destructor)는 특정 멤버 함수가 호출되어 소멸자 내부에서 객체를 정리하는 작업을 함.

// 생성자(constructor)
// 클래스의 모든 멤버 변수가 모드 public인 경우 초기화 목록을 사용하여 초기화를 직접 할 수 있음.
// 멤버 변수가 private인 경우에는 변수에 직접 접근할 수 없는 비공개 상태이므로 더는 아래와 같은 방법으로 초기화할 수 없음.
/*
class cls{
    public:
        int x;
        int y;
};

int main(){
    cls c1 = {4,5}; // initialization list
    cls c2{6,7}; // uniform initialization
    return 0;
}
*/
// 생성자는 해당 클래스의 객체가 인스턴스화될 때, 자동으로 호출되는 특수한 종류의 멤버 함수다.
// 생성자는 일반적으로 클래스의 멤버 변수를 적절한 기본값 또는 사용자 제공 값으로 초기화하거나 클래스를 사용하는데 필요한 설정이 사용됨.
// 일반적인 멤버 함수와 다르게 생성자 정의 방법이는 규칙이 아래에 나왔있음.
// 1. 생성자 이름은 클래스와 이름이 같아야 함.
// 2. 생성자는 리턴 타입이 없음.(void 아님.)

// 생성자 종류
// 매개변수가 있는 생성자

// 기본 생성자(default constructor)
// 매개 변수를 갖지 않거나 기본값이 설정된 매개 변수를 가지고 있는 생성자임.
// 클래스를 인스턴스화 할 때, 사용자가 초기값을 제공하지 않으면 기본 생성자가 호출됨.

// 복사 생성자
// 이동 생성자

// 기본 생성자(default constructor) 예시

class Fraction{
    private:
        int numerator;
        int denominator;
    public:
        Fraction(){
            numerator = 1;
            denominator = 2;
        }
        int get_numerator() {return numerator;}
        int get_denominator() {return denominator;}
        double get_value() {return static_cast<double>(numerator)/denominator;}
};

int main(){
    Fraction fraction;
    cout << fraction.get_numerator() << " / " << fraction.get_denominator() << " = " << fraction.get_value() << endl;
    return 0;
}