// goto문 : 프로그래밍 언어에서 특정 위치로 즉시 이동할 수 있게 해주는 명령문
/*
#include<iostream>

int main() {
	int num = 1;
start:
	std::cout << "현재 숫자: " << num << std::endl;
	num++;
	if (num <= 5) {
		goto start;
	}
	std::cout << "프로그램 종료" << std::endl;
	return 0;
}
*/

// int 타입의 표현 범위
// -2,147,483,648 ~ 2,147,483,647

// unsigned int 타입의 표현 범위
// 양수만 표현 가능
// 0 ~ 4,294,967,295

/*
#include<iostream>
int main() {
	unsigned int num1{ 0 };
	unsigned int num2{ 0 };
	num1 = -1; // 0000 0000 - 0000 0001 = 0000 0000 + 1111 1111 = 1111 1111
	num2 = 4294967296; // 1111 1111 + 1 = 0000 0000
	std::cout << num1 << std::endl;
	std::cout << num2 << std::endl;
	return 0;
}
*/

// Formulating Algorithms
/*
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int total{ 0 };
	unsigned int gradeCounter{ 0 };

	cout << "Enter grade or -1 to quit: ";
	int grade;
	cin >> grade;

	while (grade != -1) {
		total += grade;
		gradeCounter += 1;

		cout << "Enter grade or -1 to quit: ";
		cin >> grade;
	}

	if (gradeCounter != 0) {
		// static_cast : 변수 원본은 변경전의 type로 유지하게 함.
		
		// int형 -> double형으로 변경
		// implicit casting : 컴파일러 내부에서 이루어지는 casting
		// explicit casting : static_cast 구문을 활용한 casting
		double average{ static_cast<double>(total) / gradeCounter };

		// setprecision : 소수점 이하 몇 번째 자리까지 표시할 것인지 설정하는 함수
		// setprecision은 라이브러리 iomanip 활용해야 함.
		// fixed : 소수점 표시 형식을 설정하는 함수
		cout << "\nTotal of the " << gradeCounter << " grades entered is " << total;
		cout << setprecision(2) << fixed;
		cout << "\nClass average is " << average << endl;
	}
	else {
		cout << "No grades were entered" << endl;
	}
}
*/

// Increment and Decrement Operators
/*
#include<iostream>
using namespace std;
int main() {
	unsigned int c{ 5 };
	cout << "c before postincrement: " << c << endl;
	cout << "	postincrementing c: " << c++ << endl;
	cout << "c after postincrement: " << c << endl;

	c = 5;
	cout << "c before preincrement: " << c << endl;
	cout << "	preincrementing c: " << ++c << endl;
	cout << "c after preincrement: " << c << endl;
	return 0;
}
*/

// Pass/Fail 통계 프로그램 제작
/*
#include<iostream>
using namespace std;

int main() {
	unsigned int passes{ 0 };
	unsigned int failures{ 0 };
	unsigned int studentCounter{ 0 };

	while (studentCounter <= 10) {
		cout << "Enter score (<= 100 and >=0): ";
		int result;
		cin >> result;

		if (result > 100) {
			cout << "Please enter valid score!" << endl;
		}
		else if (result < 0) {
			cout << "Please enter valid score!" << endl;
		}
		else {
			if (result >= 70) passes += 1;
			else failures += 1;
			studentCounter += 1;
		}
	}

	cout << "Passed: " << passes << endl;
	cout << "Failed: " << failures << endl;

	return 0;
}
*/

// 성적 통계 프로그램 제작
/*
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int A{ 0 };
	int B{ 0 };
	int C{ 0 };
	int D{ 0 };
	int F{ 0 };
	float avg{ 0 };
	int studentCounter{ 0 };
	while (studentCounter <= 9) {
		cout << "Enter score (<= 100 and >=0): ";
		int result;
		cin >> result;
		if (result > 100) {
			cout << "Please enter valid score!" << endl;
		}
		else if (result < 0) {
			cout << "Please enter valid score!" << endl;
		}
		else {
			if (result >= 90) A += 1;
			else if (result >= 80) B += 1;
			else if (result >= 70) C += 1;
			else if (result >= 60) D += 1;
			else F += 1;
			avg += result;
			studentCounter += 1;
		}
	}
	avg = avg / static_cast<float>(studentCounter);
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	cout << "C: " << C << endl;
	cout << "D: " << D << endl;
	cout << "F: " << F << endl;
	cout << "Avg: " << avg << endl;
	return 0;
}
*/