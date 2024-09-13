/*
// 전처리 지시문(Preprocessing Directive)
// iostream: Input/Output 관련 자주 쓰는 함수 및 클래스를 모아 놓은 소스코드
#include <iostream>

// 모든 C++ 프로그램은 단 하나의 main 함수만을 가져야하며 프로그램 실행은 main에서 시작됨.
int main() {
	// std:: : namespace를 나타내며(namespace라는 장소 명시), namespace는 여러 종류의 함수나 클래스 등을 묶어 놓은 그룹이라고 볼 수 있음.
	// 세미 콜론의 역할 : 명령문이 끝났다는 것을 명시
	// cout : 텍스트 값을 출력해주는 명령어
	// << : string insertion 무슨 데이터를 삽입할 지 알려준다.
	// \n : escape sequence 중 하나
	std::cout << "Welcome to C++ !!\n";

	// return 0; : 메인 함수가 출력하는 값 -> 메인함수가 제대로 종료가 되었다는 말이다.
	return 0;
}
*/

/*
#include<iostream>
int main() {
	int number1{ 0 }; // (표준) 변수 선언
	int number2{ 0 };
	int sum{ 0 };

	std::cout << "Enter first integer: ";
	std::cin >> number1;

	std::cout << "Enter second integer: ";
	std::cin >> number2;

	sum = number1 + number2;

	std::cout << "Sum is " << sum << std::endl;

	return 0;
}
*/

/*
// 타입을 명시적으로 언급할 "특별한 이유"가 없으면 auto를 사용함.
// auto를 사용하면, 중복과 긴 타입명을 막아줌.
// 정밀도를 높이고 싶을 때는 자료형을 확실히 명시해준다.
// 변수는 반드시 사용 전에 선언이 되어야 함.

// cin : 입력 string의 역할 -> 꺽쇠 존재
// endl : string이 끝나고 출력 후, \n작동
*/

/*
// practice1
#include<iostream>
using namespace std;
int main() {
	int num1{ 0 };
	int num2{ 0 };

	cout << "Enter two integers to comapare: ";
	cin >> num1 >> num2;

	cout << "Sum is " << num1 + num2 << endl;

	if (num1 == num2) {
		cout << num1 << " == " << num2 << endl;
	}

	if (num1 != num2) {
		cout << num1 << " != " << num2 << endl;
	}

	if (num1 < num2) {
		cout << num1 << " < " << num2 << endl;
	}

	if (num1 > num2) {
		cout << num1 << " > " << num2 << endl;
	}

	if (num1 >= num2) {
		cout << num1 << " >= " << num2 << endl;
	}

	if (num1 <= num2) {
		cout << num1 << " <= " << num2 << endl;
	}
	return 0;
}
*/

/*
// practice 2
#include<iostream>
using namespace std;

int main() {
	int num1{ 0 };
	int num2{ 0 };

	cout << "Enter two integers: ";
	cin >> num1 >> num2;
	if (num1 % 2 == 0) {
		cout << "The number1 " << num1 << " is an even number!" << endl;
	}
	if (num2 % 2 == 0) {
		cout << "The number2 " << num2 << " is an even number!" << endl;
	}
	if (num1 % 2 == 1) {
		cout << "The number1 " << num1 << " is an odd number!" << endl;
	}
	if (num2 % 2 == 1) {
		cout << "The number2 " << num2 << " is an odd number!" << endl;
	}

	cout << "Sum is " << num1 + num2 << endl;
	cout << "Product is " << num1 * num2 << endl;
	cout << "Average is " << (num1 + num2) / 2 << endl;
	return 0;
}
*/