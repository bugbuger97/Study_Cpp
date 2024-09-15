/*
#include<iostream>
#include "Account.h"

using namespace std;

int main() {
	Account account1{ "Jane Green", 50 };
	Account account2{ "Jone Blue", -7 };

	cout << "account1" << account1.getName() << "balance is $" << account1.getBalance();
	cout << "\naccount2" << account2.getName() << "balance is $" << account2.getBalance();
	cout << "\n\nEnter deposit amount for account1: ";
	int depositAmount;
	cin >> depositAmount;
	cout << "adding " << depositAmount << " to account1 balance";
	account1.deposit(depositAmount);
	cout << "\n\naccount1: " << account1.getName() << "balance is $" << account1.getBalance();
	cout << "\naccount2: " << account2.getName() << "balance is $" << account2.getBalance();

	cout << "\n\nEnter deposit amount for account2: ";
	cin >> depositAmount;
	cout << "adding" << depositAmount << " to account2 balance";
	account2.deposit(depositAmount);
	cout << "\n\naccount1: " << account1.getName() << "balance is $" << account1.getBalance();
	cout << "\naccount2: " << account2.getName() << "balance is $" << account2.getBalance() << endl;
	
	cout << "\n\nEnter withdraw amount for account1: ";
	int withdrawAmount;
	cin >> withdrawAmount;
	cout << "subtracing " << withdrawAmount << " from account1 balance";
	account1.withdraw(withdrawAmount);
	cout << "\n\naccount1: " << account1.getName() << "balance is $" << account1.getBalance();
	cout << "\naccount2: " << account2.getName() << "balance is $" << account2.getBalance();

	cout << "\n\nEnter withdraw amount for account2: ";
	cin >> withdrawAmount;
	cout << "subtracing " << withdrawAmount << " from account2 balance";
	account1.withdraw(withdrawAmount);
	cout << "\n\naccount1: " << account1.getName() << "balance is $" << account1.getBalance();
	cout << "\naccount2: " << account2.getName() << "balance is $" << account2.getBalance();

	return 0;
}
*/

// type : 추상화된것
// instance : 타입을 실체화한 구체적인 실체
// attribute : 인스턴스가 가지는 특징
// behavior : 어떤 인스턴스가 스스로 할 수 있는 작업, 연산
// class : 타입(사용자 정의 자료형)을 만듦
// object : 클래스를 기반으로 만든 인스턴스 == 객체
// attribute and behavior : 데이터 멤버와 멤버 함수를 만듦
// 데이터 멤버 : 속성을 표현하기 위한 변수
// 멤버함수 : 객체의 행위

/*
클래스

클래스 정의 : 속성과 행위 선언
멤버함수 정의 : 행위 정의
애플리케이션 : 객체를 인스턴스화 하고 사용
*/

// constructor : 특별한 멤버함수가 호출될 때, 생성(객체를 생성하는 특별한 멤버함수) == 생성자
// destructor : 특별한 멤버함수가 호출되어 소멸자 내부에서 객체를 정리하는 작업 == 소멸자

// 클래스 만들기
#include<iostream>

// 클래스 정의
// 생성자, 멤버함수 선언
class Square {
private:
	double base;
public:
	Square(double base); // 매개변수가 있는 생성자
	Square(); // 기본 생성자
	~Square(); // 소멸자
	Square(const Square& square); // 복사 생성자
	void setBase(double base); // 설정자
	double getBase() const; // 접근자
	double getArea() const; // 접근자
	double getPerimeter() const; // 접근자
};

// 멤버함수 정의
Square::Square(double base)
	:base(base) {
	std::cout << "매개변수가 있는 생성자가 호출되었습니다." << std::endl;
}

Square::Square()
	:base(0.0) {
	std::cout << "기본 생성자가 호출되었습니다." << std::endl;
}

Square::Square(const Square& square)
	:base(square.base) {
	std::cout << "복사 생성자가 호출되었습니다." << std::endl;
}

Square::~Square() {
	std::cout << "소멸자가 호출되었습니다: " << base << std::endl;
}

void Square::setBase(double val) {
	base = val;
}

double Square::getBase() const{
	return base;
}

double Square::getArea() const {
	return (base * base);
}

double Square::getPerimeter() const {
	return (4 * base);
}

using namespace std;
// 애플리케이션 : 메인함수 안에서 객체 생성하기
// 멤버함수 호출하기
int main() {
	// 인스턴스화 후에 멤버함수 호출하기
	Square square1(4.);
	cout << "Base : " << square1.getBase() << endl;
	cout << "Area : " << square1.getArea() << endl;
	cout << "Perimeter: " << square1.getPerimeter() << endl << endl;

	Square square2(square1);
	cout << "Base : " << square2.getBase() << endl;
	cout << "Area : " << square2.getArea() << endl;
	cout << "Perimeter: " << square2.getPerimeter() << endl << endl;

	Square square3;
	cout << "Base : " << square3.getBase() << endl;
	cout << "Area : " << square3.getArea() << endl;
	cout << "Perimeter: " << square3.getPerimeter() << endl << endl;
	
	// 소멸자 호출 시점
	return 0;
}