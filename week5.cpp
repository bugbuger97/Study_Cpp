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
// maximum �Լ��� int �� ���� �ٷ�� vs double�� ���� �ٷ��
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

	// ����� Ÿ���� �Լ��� ���ǵǾ� ������, �ش� �Լ��� �켱������ Ȱ����.
	// Function Template�� �켱������ Ȱ���ϰ� �ʹٸ�, ��� �� <Type>�� ���·� �Լ��� call�ؾ� ��.
	maximum(1, 10, 5);
	maximum<int>(1, 10, 5);
}
*/

/*
// Recursion
// ����Լ�: �־��� ������ Ǯ�� ���ؼ� �����θ� ȣ���ϴ� �Լ��� ���¸� �ǹ���.
// Recursion
// 1. Base case: ����Լ��� return�� ���� �⺻���� ���ǿ� ���� ó���� �Ǿ��־�� ��.
// 2. Recursive step: �־��� ��Ȳ���� base step���� ���� ���� ������� �ܰ谡 �ʿ���.
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
// �Ǻ���ġ ���� ���� -> Base case�� 0, 1 �ΰ������ ���� �߿�
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

	// C++���� int main() �Լ��� ���� return 0;�� ��������� ���� �ʾƵ� �Ǵ� ������ C++ ǥ���� �̸� �ڵ����� ó�����ֱ� �����̴�. 
	// ��ü������, C++11 ǥ�غ��ʹ� main �Լ��� ������ ����Ǹ� �Ϲ������� return 0;�� �߰��� ������ �����Ѵ�. 
	// �̴� ���α׷��� ���������� ����Ǿ����� ��Ÿ���� ��ȯ���� �ڵ����� ��ȯ�ϵ��� �ϴ� ���̴�.  
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
// ��� ����: �ڵ� �������� �����ϰ� ���������� ��Ÿ���ٴ� ���� ū ����
// ��� ����: function call stack ���� �� �Լ� ȣ�⿡ ����� ���Ƿ� ���α׷� ������ ������ �� ����.
// iteration ���: ���α׷� ���� �ÿ��� ȿ������ �� ������, �ڵ尡 ������� ���� ��͸� �� ����ؾ��ϴ� �����鵵 �ִ�.

// 1. iteration ����� factorial ����
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

int cubeByValue(int number = 2); // default argument�� 2�� ����
void cubeByReference(int&); // default argument�ε� Reference�� �Ķ���ͷ� ���� ���, ������ �ڿ� &�� ����.

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