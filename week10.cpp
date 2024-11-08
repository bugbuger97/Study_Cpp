/*
lvalue (Left Value)
- lvalue는 메모리의 특정 위치를 참조하는 값임. 
- 변수나 객체처럼 수정 가능한 값을 나타냄.
- 대입 연산의 왼쪽에 올 수 있으며, 수명(lifetime)이 존재하여 특정 메모리 위치에 저장됨.
- 예를 들어, int x = 5;에서 x는 lvalue임. 
- 이는 메모리의 주소에 연결된 식별자로, 값을 변경할 수 있다.
- 모든 lvalue는 대입할 수 있지만, 모든 lvalue가 항상 변경 가능한 것은 아님. (예: const로 선언된 변수는 lvalue지만 변경할 수는 없음.)

rvalue (Right Value)
- rvalue는 임시 값으로, 메모리의 특정 위치에 고정되지 않는 값을 의미함.
- 대입 연산의 오른쪽에 올 수 있으며, 일반적으로 일시적인 값이거나 평가된 식의 결과임.
- rvalue는 수명이 제한적이고, 수정할 수 없으며 대입 연산의 왼쪽에 올 수 없다.
- 예를 들어, 10, x + 1, 3.14 등은 rvalue입니다.

int y = 10 + 5; // 10 + 5는 rvalue
int z = y * 2; // y * 2는 rvalue

lvalue 참조 (Left Value Reference) - &
- lvalue 참조는 특정 메모리 주소에 저장된 기존 객체에 대한 참조를 의미함. 
- 즉, &로 선언된 참조는 수정 가능한 lvalue에만 바인딩될 수 있다.

rvalue 참조 (Right Value Reference) - &&
- rvalue 참조(&&)는 임시 객체에 대한 참조로, 일시적인 값이나 임시 객체에 바인딩된다. 
- 이는 이동 시멘틱을 통해 복사 대신 자원 이동을 가능하게 함.

cascading(연쇄 호출)
- cascading(연쇄 호출)은 객체의 멤버 함수를 연속해서 호출하는 기법을 의미함. 
- 보통 .(dot) 연산자나 ->(arrow) 연산자를 이용해 여러 함수를 한 줄에서 차례대로 호출할 수 있도록 함. 
- 이는 멤버 함수가 *this를 반환하여, 메서드 체이닝(method chaining)을 가능하게 함으로써 이루어짐.
*/

/*
#include<iostream>
#include"Date.h"
using namespace std;

int main() {
	Date d1{ 12, 27, 2010 };
	Date d2;

	cout << "d1 is " << d1 << "\nd2 is " << d2;
	cout << "\n\nd1 += 7 is " << (d1 += 7);

	d2.setDate(2, 28, 2008);
	cout << "\n\n  d2 is " << d2;
	cout << "\n++d2 is " << ++d2 << " (leap year allows 29th)";

	Date d3{ 7, 13, 2010 };

	cout << "\n\nTesting the prefix increment operator:\n" << "  d3 is " << d3 << endl;
	cout << "++d3 is " << ++d3 << endl;
	cout << "  d3 is " << d3;

	cout << "\n\nTesting the postfix increment operator:\n" << "  d3 is " << d3 << endl;
	cout << "d3++ is " << d3++ << endl;
	cout << "  d3 is " << d3 << endl;
}
*/

// Rectangle 클래스에서의 연산자 오버로딩
#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Rectangle.h"
using namespace std;

int main() {
	Rectangle a{ 8.0, 6.0 };
	Rectangle b{ 3.7, 4.5 };

	cout << fixed;
	cout << setprecision(1);
	cout << boolalpha;

	cout << "a: length = " << a.getLength() << "; width = " << a.getWidth() << "; perimeter = " << a.perimeter() << "; area = " << a.area() << "\n";
	cout << "b: length = " << b.getLength() << "; width = " << b.getWidth() << "; perimeter = " << b.perimeter() << "; area = " << b.area() << "\n";

	cout << "a == b? : " << (a == b) << endl;
	cout << "a > b? : " << (a > b) << endl;
	cout << "b > a? : " << (b > a) << endl;
	cout << "a != b? : " << (a != b) << endl;

	Rectangle c;
	c = a - b;
	cout << "c = a - b" << endl;
	cout << "c: length = " << c.getLength() << "; width = " << c.getWidth() << endl;

	a -= b;
	cout << "a -= b" << endl;
	cout << "a: length = " << a.getLength() << "; width = " << a.getWidth() << "; perimeter = " << a.perimeter() << "; area = " << a.area() << "\n";

	cout << "객체 b에 대한 정보: " << b << endl;

	a += b;
	cout << "a += b" << endl;
	cout << "객체 a에 대한 정보: " << a << endl;

	Rectangle d;
	d = a + b;
	cout << "d = a + b" << endl;
	cout << "객체 d에 대한 정보: " << d << endl;


}