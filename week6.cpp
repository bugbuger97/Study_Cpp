// C++ Standard Library Class Template vector
/*
#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
using namespace std;

void outputVector(const vector<int>&);
void inputVector(vector<int>&);

int main() {
	vector<int> integers1(7);
	vector<int> integers2(10);

	cout << "Size of vector integer1 is" << integers1.size() << "\nvector after initialization: ";
	outputVector(integers1);

	cout << "\nSize of vector integers2 is" << integers2.size() << "\nvector after initialization: ";
	outputVector(integers2);

	cout << "\nEnter 17 integers:" << endl;
	inputVector(integers1);
	inputVector(integers2);

	cout << "\nAfter input, the vectors contain:\n" << "integers1: ";
	outputVector(integers1);
	cout << "integers2: ";
	outputVector(integers2);

	cout << "\nEvaluating: integers1 != integers2" << endl;
	if (integers1 != integers2) {
		cout << "integers1 and integers2 are not equal" << endl;
	}

	vector<int> integers3{ integers1 };
	cout << "\nSize of vector integers3 is " << integers3.size() << "\nvector after initialization: ";
	outputVector(integers3);

	cout << "\nAssgning integers2 to integers1: " << endl;
	integers1 = integers2;

	cout << "integers1: ";
	outputVector(integers1);
	cout << "integers2: ";
	outputVector(integers2);

	cout << "\nEvaluating: integers1 == integers2" << endl;
	if (integers1 == integers2) {
		cout << "integers1 and integers2 are equal" << endl;
	}

	cout << "\nintegers1[5] is " << integers1[5];
	cout << "\n\nAssigning 1000 to integers1[5]" << endl;
	integers1[5] = 1000;
	cout << "integers1: ";
	outputVector(integers1);

	try {
		cout << "\nAttempt to display integers1.at(15)" << endl;
		cout << integers1.at(15) << endl;
	}
	catch (out_of_range& ex) {
		cerr << "An exception occurred: " << ex.what() << endl;
	}
	
	cout << "\nCurrent integers3 size is: " << integers3.size() << endl;
	integers3.push_back(1000);
	cout << "New integers3 size is: " << integers3.size() << endl;
	cout << "integers3 now contains: ";
	outputVector(integers3);
	
	return 0;
}

void outputVector(const vector<int>& items) {
	for (int item : items) {
		cout << item << " ";
	}
	cout << endl;
}

void inputVector(vector<int>& items) {
	for (int& item : items) {
		cin >> item;
	}
}
*/

/*
* Array �⺻ ����
* An array is a contiguous group of memory locations that all have the same type.
* array<������, �迭 size> �迭 �̸�;
* class template: ���α׷��Ӱ� ���ϴ� �������� �Է��Ͽ� ����� �� �ִ� Ŭ���� ����
* function template: �Լ��� ���ؼ��� ���ϴ� type�� �Է��Ͽ� ����ϵ��� ������ �� �ִ� �Լ� ����
* �迭�� �����ϸ� �޸� �� (������ size) x (�迭 size)��ŭ�� ������ Ȯ����.

* Array �ʱ�ȭ
* array�� �����ϸ�, �޸� ���� ������ Ȯ���Ǹ�, ���� array�� Ȱ���ϱ� ���� array �� ĭ�� ���� �ʱ�ȭ ���־�� ��.
* ������ �迭�� array class�� object�̸�, .operator�� member�� ���� ������.
* size_t�� unsigned int ������ type���ν� array�� size�� index�� ��Ÿ�� �� �ַ� ����.
* size(): member function���� �ش� �迭�� ũ�⸦ �� �� ����.
*/

/*
#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {
	array<int, 5> n; // n is an array of 5 int values

	for (size_t i{ 0 }; i < n.size(); ++i) {
		n[i] = 0; // set element at location i to 0
	}

	cout << "Element" << setw(10) << "Value" << endl;

	for (size_t j{ 0 }; j < n.size(); ++j) {
		cout << setw(7) << j << setw(10) << n[j] << endl;
	}
}
*/

/*
* ���� initializer list ���� ���� ������ �迭 ũ�⺸�� ���ٸ�, �ʱⰪ�� �������� ���� ��ҵ��� 0���� �ʱ�ȭ ��.
* ���� initializer list ���� ���� ������ �迭 ũ�⺸�� ���ٸ�, ������ �߻���.
* size_t: unsigned int ������ type���ν� array�� size�� index�� ��Ÿ�� �� �ַ� ����.
*/

/*
#include<iostream>
#include<iomanip>
#include<array>
using namespace std;

int main() {
	array<int, 5> n{ 32, 27, 64, 18, 95 }; // list initializer

	cout << setw(7) << "Element" << setw(10) << "Value" << endl;
	for (size_t i{ 0 }; i < n.size(); ++i) {
		cout << setw(7) << i << setw(10) << n[i] << endl;
	}
}
*/

/*
* �迭�� ������ ��, �迭�� ũ�⸦ const�� ������ ������ �̿��Ͽ� ���� �� ����.
* �迭�� ũ��� ����θ� ������ �� �����Ƿ� �Ϲ����� �����δ� �Ұ����ϸ�, �� �� ����� ���� ���� �ٲ��� �ʴ� const ������ Ȱ�� ������.
* �� const�� ����? -> �������� ����Ǳ� ���� ������ ũ�⸦ �� �˾ƾ� �ϱ� ������ const�� ����Ѵ�.
* �迭�� ũ��� ���� ����� �ʿ��� ���׵鿡 ����, const ������ �����Ͽ� Ȱ���ϸ� ���α׷��� ������ �� ���������� �� ����.
* ���α׷� ���� �������� ��ġ���� �ٲپ ������ ���� ���� ���, �ٲ� ���ڵ�� ������ �������� ���α׷� ���ʿ� ���Ƽ� �����ϸ� ���������� ����.
*/

/*
#include<iostream>
#include<iomanip>
#include<array>
using namespace std;

int main() {
	const size_t arraySize{ 5 };
	array<int, arraySize> values;
	for (size_t i{ 0 }; i < values.size(); ++i) {
		values[i] = 2 + 2 * i;
	}
	cout << "Element" << setw(10) << "Value" << endl;
	for (size_t j{ 0 }; j < values.size(); ++j) {
		cout << setw(7) << j << setw(10) << values[j] << endl;
	}
}
*/

/*
* �迭�� Ȱ���Ͽ� ������ �����͸� �����ϰ�, �̸� �׷��� ���·� ǥ���� �� ����.

* Range-Based for Statement
* C++�� range-based for ������ ������ counter ���� for���� array ���� ��ҵ鿡 ���� loop�� �� �� �����ϵ��� �� �� ����.
* Range-based for �������� �迭�� ���� �����ϰ��� �� ���� reference�� Ȱ����.
* ���� reference�� �ƴ� int ���� type�� ����� ���, for �� ������ iteration�� ����Ǹ� ������ ������ �⺻������ pass-by-value �������� ��������� ������ ���� �迭 ���� ���� �ٲ� ���� ���� ��.

* Multidimensional Arrays
* You can use arrays with two dimensions to represent tables of values consisting of information arranged in rows and columns.
* Range-based for ������ ��ø�Ͽ� 2���� �迭������ iteration�� ����
* ó�� ������ �迭�� 2�����̹Ƿ� �̿� ���� range-based for ������ �����ϸ�, �� iteration���� �����ϴ� ��Ҵ� 1���� �迭�� ��.
* auto�� �����Ϸ����� �ڵ����� �ڷ����� �߷��ϵ��� �ϴ� ���
*/

/*
#include<iostream>
#include<array>
using namespace std;

const size_t rows{ 2 };
const size_t columns{ 3 };
void printArray(const array<array<int, columns>, rows>&);

int main() {
	array<array<int, columns>, rows> array1{ 1,2,3,4,5,6 };
	array<array<int, columns>, rows> array2{ 1,2,3,4,5 };

	cout << "Values in array1 by row are:" << endl;
	printArray(array1);
	cout << "\nValues in array2 by row are:" << endl;
	printArray(array2);
}

void printArray(const array<array<int, columns>, rows>& a) {
	for (auto const& row : a) { //�ڵ尡 ��Ȯ�ϸ�, auto�� �ᵵ ��Ȯ�ϴ�.
		for (auto const& element : row) {
			cout << element << ' ';
		}
		cout << endl;
	}
}
*/

/*
* C++ Standard Library class template vector is similar to class template array, but also supports dynamic resizing
* vector Ŭ������ array�� ���������� ũ�� ������ ������ C++ Standard Library ���� Ŭ����
* ũ�� ���� �̿��� ������ action�� ���� ������ array�� ������.
* vector ����: vector<type> name(length);
*/

/*
#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>
using namespace std;

void outputVector(const vector<int>&);
void inputVector(vector<int>&);

int main() {
	vector<int> integers1(7);
	vector<int> integers2(10);

	cout << "Size of vector integer1 is " << integers1.size() << "\nvector after initialization:";
	outputVector(integers1);
	cout << "Size of vector integer2 is " << integers2.size() << "\nvector after initialization:";
	outputVector(integers2);

	cout << "\nEnter 17 integers:" << endl;
	inputVector(integers1);
	inputVector(integers2);

	cout << "\nAfter input, the vectors contain:\n" << "integers1:";
	outputVector(integers1);
	cout << "integers2:";
	outputVector(integers2);

	cout << "\nEvaluating: integers1 != integers2" << endl;

	if (integers1 != integers2) {
		cout << "integers1 and integers2 are not equal" << endl;
	}

	vector<int> integers3{ integers1 };

	cout << "\nSize if vector integers3 is " << integers3.size() << "\nvector after initoalization: ";
	outputVector(integers3);

	cout << "\nAssigning integers2 to integers1:" << endl;
	integers1 = integers2;

	cout << "integers1: ";
	outputVector(integers1);
	cout << "integers2: ";
	outputVector(integers2);

	cout << "\nEvaluating: integers1 == integers2" << endl;

	if (integers1 == integers2) {
		cout << "integers1 and integers2 are equal" << endl;
	}

	cout << "\nintegers1[5] is " << integers1[5];

	cout << "\n\nAssigning 1000 to integers1[5]" << endl;
	integers1[5] = 1000;
	cout << "integers1: ";
	outputVector(integers1);

	try {
		cout << "\nAttempt to display integers1.at(15)" << endl;
		cout << integers1.at(15) << endl; // at(): member function���� �ش� index ��� ���� ����(array������ ����)
	}
	catch (out_of_range& ex) {
		cerr << "An exception occurred: " << ex.what() << endl;
	}

	cout << "\nCurrent integers3 size is: " << integers3.size() << endl;
	integers3.push_back(1000);
	cout << "New integers3 size is: " << integers3.size() << endl;
	cout << "integers3 now contains: ";
	outputVector(integers3);
}

void inputVector(vector<int>& items) {
	for (int& item : items) {
		cin >> item;
	}
}

void outputVector(const vector<int>& items) {
	for (int item : items) {
		cout << item << " ";
	}
	cout << endl;
}
*/

/*
#include <array>
#include "GradeBook2.h"
using namespace std;

int main() {
	array<array<int, GradeBook::tests>, GradeBook::students> grades{
		{{87, 96, 70},
		{68, 87, 90},
		{94, 100, 90},
		{100, 81, 82},
		{83, 65, 85},
		{78, 87, 65},
		{85, 75, 83},
		{91, 94, 100},
		{76, 72, 84},
		{87, 93, 73}}
	};
	string courseName{ "CS101 Introduction to C++ Programming" };

	GradeBook myGradeBook(courseName, grades);
	myGradeBook.displayMessage();
	myGradeBook.processGrades();
}
*/

#include <array>
#include "GradeBook2.h"
using namespace std;

int main() {
	string courseName;
	array<array<int, GradeBook::tests>, GradeBook::students> grades{
		{{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0}}
	};
	array<int, 3> temp{ 0,0,0 };

	cout << "Please enter the course name: ";
	cin >> courseName;
	for (int i{ 0 }; i < 5; ++i) {
		cout << "Please enter grades of the student " << i + 1 << ": ";
		cin >> temp[0] >> temp[1] >> temp[2];
		grades[i] = temp;
	}
	
	cout << endl;
	GradeBook studentsGradeBook(courseName, grades);
	studentsGradeBook.displayMessage();
	studentsGradeBook.processGrades();
}