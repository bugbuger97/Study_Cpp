// �������̽� �� ���� �и�
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

// ������ �Լ� �� default arguments
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
* C++���� ��ü�� ������ �� const�� ������ �� ������, �̷��� ������ const ��ü�� const�� ����� ��� �Լ��� ȣ���� �� ����.
* const ��ü���� non-const ��� �Լ��� ȣ���ϴ� �� ������ ������ ���߽�Ŵ.
*/

// const ��ü �� const ��� �Լ�
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
* this ������: C++���� ��ü�� ��� �Լ� ���ο��� ���Ǵ� �����ͷ�, �ش� ��ü �ڽ��� �ּҸ� ����Ŵ.
* 1. ���Ҵ� �Ұ�
* 2. �Ϲ��� ����
* 3. ��ü�� ��� ����
* 4. ü�� ȣ�� ����
 
* Composition
* � Ŭ������ �ٸ� Ŭ������ ����� �� �� �ִ� ����� composition(�Ǵ� aggregation)�̶�� �ϸ�, �̶� �� Ŭ���� ���̿��� has-a-relationship�� �ִٰ� ��.
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

// �������̽��� �̿��� Name Class ����
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