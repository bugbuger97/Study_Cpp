// 인터페이스 및 구현 분리
/*
#include<iostream>
#include<stdexcept>
#include"Time.h"
using namespace std;

void displayTime(const string& message, const Time& time) {
	cout << message << "\nUniversal time: " << time.toUniversalString() << "\nStandard time: " << time.toStandardString() << "\n\n";
}

int main() {
	Time t;

	displayTime("Initial time:", t);
	t.setTime(13, 27, 6);
	displayTime("After setTime:", t);

	try {
		t.setTime(99, 99, 99);
	}
	catch (invalid_argument& e) {
		cout << "Exception: " << e.what() << "\n\n";
	}

	displayTime("After attempting to set an invalid time:", t);
}
*/

// 생성자 함수 및 default arguments
/*
#include<iostream>
#include<stdexcept>
#include"Time.h"
using namespace std;

void displayTime(const string& message, const Time& time) {
	cout << message << "\nUniversal time: " << time.toUniversalString() << "\nStandard time: " << time.toStandardString() << "\n\n";
}

int main() {
	Time t1;
	Time t2{ 2 };
	Time t3{ 21, 34 };
	Time t4{ 12, 25, 42 };

	cout << "Constructed with:\n\n";
	displayTime("t1: all arguments defaulted", t1);
	displayTime("t2: hour specified; minute and second defaulted", t2);
	displayTime("t3: hour and minute specified; second defaulted", t3);
	displayTime("t4: hour, minute and second specified", t4);

	try {
		Time t5{ 27, 74, 99 };
	}
	catch (invalid_argument& e) {
		cerr << "Exception while initializing t5: " << e.what() << endl;
	}
}
*/

/*
* C++에서 객체를 생성할 때 const로 생성할 수 있으며, 이렇게 생성된 const 객체는 const로 선언된 멤버 함수만 호출할 수 있음.
* const 객체에서 non-const 멤버 함수를 호출하는 건 컴파일 에러를 유발시킴.
*/

// const 객체 및 const 멤버 함수
/*
#include"Time.h"

int main() {
	Time wakeUp{ 6, 45, 0 };
	const Time noon{ 12, 0, 0 };
	wakeUp.setHour(18);
	//noon.getHour(12);
	wakeUp.getHour();
	noon.getMinute();
	noon.toUniversalString();
	noon.toStandardString();

}
*/

/*
* this 포인터: C++에서 객체의 멤버 함수 내부에서 사용되는 포인터로, 해당 객체 자신의 주소를 가리킴.
* 1. 재할당 불가
* 2. 암묵적 전달
* 3. 객체의 멤버 접근
* 4. 체인 호출 지원
 
* Composition
* 어떤 클래스가 다른 클래스의 멤버가 될 수 있는 기능을 composition(또는 aggregation)이라고 하며, 이때 두 클래스 사이에는 has-a-relationship이 있다고 함.
*/

// composition
/*
#include<iostream>
#include"Date.h"
#include"Employee.h"
using namespace std;

int main() {
	Date birth{ 7,24,1949 };
	Date hire{ 3,12,1988 };
	Employee manger{ "Bob", "Blue", birth, hire };

	cout << "\n" << manger << endl;
}
*/

// 인터페이스를 이용한 Name Class 구현
#include<iostream>
#include<string>
#include<stdexcept>
#include"Name.h"
using namespace std;

int main() {
	Name defaultArg;
	Name obj1{ "Gaeg Chae" };
	Name obj2{ "Gaeg Chae", "Kim" };

	cout << "Default: " << defaultArg.getFullName() << endl;
	cout << "Obj1: " << obj1.getFullName() << endl;
	cout << "Obj2: " << obj2.getFullName() << endl;

	obj1.setLastName("Lee");
	cout << "Obj1 after setLastName: " << obj1.getFullName() << endl;
	try {
		obj1.setFirstName("P");
	}
	catch (invalid_argument& e) {
		cerr << "\nException: " << e.what() << endl;
	}

	try {
		obj2.setLastName("");
	}
	catch (invalid_argument& e){
		cerr << "\nException: " << e.what() << endl;
	}
	return 0;
}