/*
// Overloaded square function
#include <iostream>
using namespace std;

// function square for int values
int square(int x) {
	cout << "square of integer " << x << " is ";
	return x * x;
}

// function square for double values
double square(double y) {
	cout << "square of double " << y << " is ";
	return y * y;
}

int main() {
	cout << square(7); // calls int version
	cout << endl;
	cout << square(7.5); // calls double version
	cout << endl;
}
*/

/*
// Function Template
// maximum 함수의 int 형 변수 다루기 vs double형 변수 다루기
#include <iostream>
using namespace std;

// returns that largest of three integers
int maximum(int x, int y, int z) {
	cout << "int maximum function" << endl;
	int maximumValue{ x };
	if (y > maximumValue) maximumValue = y;
	if (z > maximumValue) maximumValue = z;
	cout << "maximum value: " << maximumValue << endl;
	return maximumValue;
}

double maximum(double x, double y, double z) {
	cout << "double maximum function" << endl;
	double maximumValue{ x };
	if (y > maximumValue) maximumValue = y;
	if (z > maximumValue) maximumValue = z;
	cout << "maximum value: " << maximumValue << endl;
	return maximumValue;
}

// Function template maximum header
template <typename T> // or template<class T>
T maximum(T value1, T value2, T value3) {
	cout << "template maximum function" << endl;
	T maximumValue{ value1 }; // assume x
	if (value2 > maximumValue) {
		maximumValue = value2;
	}
	if (value3 > maximumValue) {
		maximumValue = value3;
	}
	cout << "maximum value: " << maximumValue << endl;
	return maximumValue;
}

int main() {
	cout << "Input three integer values: ";
	int int1, int2, int3;
	cin >> int1 >> int2 >> int3;

	cout << "The maximum integer value is: " << maximum(int1, int2, int3);

	cout << "\n\nInput three double values: ";
	double double1, double2, double3;
	cin >> double1 >> double2 >> double3;

	cout << "The maximum double value is: " << maximum(double1, double2, double3);

	cout << "\n\nInput three characters: ";
	char char1, char2, char3;
	cin >> char1 >> char2 >> char3;
	cout << "The maximum character value is: " << maximum(char1, char2, char3) << endl;

	// 사용할 타입의 함수가 정의되어 있으면, 해당 함수를 우선적으로 활용함.
	// Function Template을 우선적으로 활용하고 싶다면, 사용 시 <Type>의 형태로 함수를 call해야 함.
	maximum(1, 10, 5);
	maximum<int>(1, 10, 5);
}
*/

/*
// Recursion
// 재귀함수: 주어진 문제를 풀기 위해서 스스로를 호출하는 함수의 형태를 의미함.
// Recursion
// 1. Base case: 재귀함수가 return될 가장 기본적인 조건에 대해 처리가 되어있어야 함.
// 2. Recursive step: 주어진 상황에서 base step으로 가기 위한 재귀적인 단계가 필요함.
#include<iostream>
#include<iomanip>
using namespace std;

unsigned long factorial(unsigned long n); // function prototype

int main() {
	for (unsigned int counter{ 0 }; counter <= 10; ++counter) {
		cout << setw(2) << counter << "! = " << factorial(counter) << endl;
	}
	return 0;
}

unsigned long factorial(unsigned long n) {
	if (n <= 1) return 1; // base case
	else return n * factorial(n - 1); // recursive step
}
*/

/*
// 피보나치 수열 구현 -> Base case가 0, 1 두가지라는 것이 중요
#include<iostream>
using namespace std;
unsigned long fibonacci(unsigned long); // function prototype

int main() {
	for (unsigned int counter{ 0 }; counter <= 10; ++counter) {
		cout << "fibonacci(" << counter << ") = " << fibonacci(counter) << endl;
	}
	cout << "\nfibonacci(20) = " << fibonacci(20) << endl;
	cout << "fibonacci(30) = " << fibonacci(30) << endl;
	cout << "fibonacci(35) = " << fibonacci(35) << endl;

	// C++에서 int main() 함수의 끝에 return 0;을 명시적으로 쓰지 않아도 되는 이유는 C++ 표준이 이를 자동으로 처리해주기 때문이다. 
	// 구체적으로, C++11 표준부터는 main 함수가 끝까지 실행되면 암묵적으로 return 0;이 추가된 것으로 간주한다. 
	// 이는 프로그램이 정상적으로 종료되었음을 나타내는 반환값을 자동으로 반환하도록 하는 것이다.  
}

unsigned long fibonacci(unsigned long number) {
	if ((0 == number) || (1 == number)) { // base case
		return number;
	}
	else { // resursion step
		return fibonacci(number - 1) + fibonacci(number - 2);
	}
}
*/

/*
// 재귀 장점: 코드 레벨에서 간단하고 직관적으로 나타난다는 것이 큰 장점
// 재귀 단점: function call stack 관리 및 함수 호출에 비용이 들어가므로 프로그램 실행이 느려질 수 있음.
// iteration 방식: 프로그램 실행 시에는 효율적일 수 있으나, 코드가 길어지고 가끔 재귀를 꼭 사용해야하는 문제들도 있다.

// 1. iteration 기반의 factorial 구현
#include<iostream>
#include<iomanip>
using namespace std;

unsigned long factorial(unsigned int); // function prototype

int main() {
	for (unsigned int counter{ 0 }; counter <= 10; ++counter) {
		cout << setw(2) << counter << "! = " << factorial(counter) << endl;
	}
}

unsigned long factorial(unsigned int number) {
	unsigned long result{ 1 };
	for (unsigned int i{ number }; i >= 1; --i) {
		result *= i;
	}
	return result;
}
*/

/*
// Default Arguments and Reference Parameter
#include <iostream>
using namespace std;

int cubeByValue(int number = 2); // default argument를 2로 설정
void cubeByReference(int&); // default argument인데 Reference를 파라미터로 받을 경우, 변수형 뒤에 &을 붙임.

int main() {
	int v{ 3 };
	int r{ 4 };

	cout << "cubeByValue with default parameter: " << cubeByValue() << endl;

	cout << "\nv before cubeByValue: " << v << endl;
	cout << "cubeByValue(v): " << cubeByValue(v) << endl;
	cout << "v after cubeByValue: " << v << endl;

	cout << "\nr before cubeByReference: " << r << endl;
	cubeByReference(r);
	cout << "r after cubeByReference: " << r << endl;
}

int cubeByValue(int number) {
	return number * number * number;
}

void cubeByReference(int& numRef) {
	numRef = numRef * numRef * numRef;
}
*/

// Recursive Exponentiation
#include <iostream>
using namespace std;

unsigned long power(unsigned long, unsigned long);

int main() {
	unsigned long base;
	unsigned long exponent;
	cout << "Enter a base and an exponent: ";
	cin >> base >> exponent;
	//cout << "base: " << base << " exponent: " << exponent << endl;
	cout << base << " raised to the " << exponent << " is " << power(base, exponent);
	return 0;
}

unsigned long power(unsigned long base, unsigned long exponent) {
	if (exponent < 1) {
		return 1;
	}
	else {
		return base * power(base, exponent - 1);
	}
}