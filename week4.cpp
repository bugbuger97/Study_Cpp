// Logical Operators
/*
#include<iostream>
using namespace std;

int main() {
	cout << boolalpha << "Logical AND (&&)" << "\nfalse && false: " << (false && false)
		<< "\nfalse && true: " << (false && true) << "\ntrue && false: " << (true && false)
		<< "\ntrue && true: " << (true && true) << "\n\n";

	cout << "Logical OR (||)" << "\nfalse || false: " << (false || false)
		<< "\nfalse || true: " << (false || true) << "\ntrue || false: "
		<< (true || false) << "\ntrue || true: " << (true || true) << "\n\n";
	cout << "Logical negation (!)" << "\n!false: " << (!false)
		<< "\n!true: " << (!true) << endl;
	return 0;
}
*/

// 논리 연산자의 활용
/*
#include <iostream>

bool functionToRun() {
	std::cout << "Function is executed!" << std::endl;
	return true;
}

int main() {
	bool condition = true;
	std::cout << "First Case" << std::endl;
	condition&& functionToRun();

	condition = false;
	std::cout << "Second Case" << std::endl;
	condition&& functionToRun();

	return 0;
}
*/

// 논리 연산자의 활용 - 비트 연산자?
/*
#include <iostream>

bool functionToRun() {
	std::cout << "Function is executed!" << std::endl;
	return true;
}

int main() {
	bool condition = true;
	std::cout << "First Case" << std::endl;
	condition& functionToRun();

	condition = false;
	std::cout << "Second Case" << std::endl;
	condition& functionToRun();

	return 0;
}
*/

// Practice: Square 출력 예제
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	unsigned int length;
	cout << "Please enter the length of the square. (The length must be greater than 2 and less than 22)\n"
		<< "Type the end-of-file indicator to terminate the program.\n"
		<< "(Windows: Ctrl + z, Linux/Mac: Ctrl + d)\n\n"
		<< "Input the length: ";
	unsigned int start{ 1 }; // 왼쪽 공백
	unsigned int end{ 0 }; // 오른쪽 공백
	unsigned int cnt{ 0 }; 
	bool flag1{ true }; // cnt 조건문 flag
	bool flag2{ true }; // start, end 조건문 flag
	while (cin >> length) {
		end = length - 2;
		if (length % 2 == 0 || length <= 4 || length >= 22) {
			cout << "Please enter the valid length!" << endl;
			cout << "Input the length: ";
			continue;
		}
		for (unsigned int i{ 0 }; i < length; i++) {
			for (unsigned int j{ 0 }; j < length; j++) {
				if (j == length - 1) {
					if (cnt <= int(length / 2) && flag1) {
						if (cnt == int(length / 2)) {
							flag1 = false;
							flag2 = false;
						}
						cnt += 1;
					}
					else {
						cnt -= 1;
					}

					if (cnt > 2 && flag2) {
						start += 1;
						end -= 1;
					}
					else if (!flag2){
						start -= 1;
						end += 1;
					}
				}
				if (i == 0 || i == length - 1) cout << "#";
				else if (i == 1 || i == length - 2) {
					if (j == 0 || j == length - 1) cout << "#";
					else cout << "*";
				}
				else {
					if (j == 0 || j == length - 1) cout << "#";
					else {
						// j = 1 ~ length - 2
						if (j <= start || j >= end) {
							cout << " ";
						}
						else {
							cout << "*";
						}
						
					}
				}
			}
			cout << endl;
		}
		cout << endl;
		cnt = 0;
		start = 1;
		end = 0;
		flag1 = true;
		flag2 = true;
		cout << "\nInput the length: ";
	}
	return 0;
}