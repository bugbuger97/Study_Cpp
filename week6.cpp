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
* Array 기본 개념
* An array is a contiguous group of memory locations that all have the same type.
* array<변수형, 배열 size> 배열 이름;
* class template: 프로그래머가 원하는 변수형을 입력하여 사용할 수 있는 클래스 형식
* function template: 함수에 대해서도 원하는 type을 입력하여 사용하도록 구현할 수 있는 함수 형식
* 배열을 선언하면 메모리 상에 (변수형 size) x (배열 size)만큼의 공간이 확보됨.

* Array 초기화
* array를 선언하면, 메모리 상의 공간이 확보되며, 이후 array를 활용하기 전에 array 각 칸의 값을 초기화 해주어야 함.
* 생성된 배열은 array class의 object이며, .operator로 member에 접근 가능함.
* size_t는 unsigned int 형태의 type으로써 array의 size나 index를 나타낼 때 주로 사용됨.
* size(): member function으로 해당 배열의 크기를 알 수 있음.
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
* 만약 initializer list 내의 원소 개수가 배열 크기보다 적다면, 초기값이 정해지지 않은 요소들은 0으로 초기화 됨.
* 만약 initializer list 내의 원소 개수가 배열 크기보다 많다면, 에러가 발생함.
* size_t: unsigned int 형태의 type으로써 array의 size나 index를 나타낼 때 주로 사용됨.
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
* 배열을 선언할 때, 배열의 크기를 const로 지정된 변수를 이용하여 정할 수 있음.
* 배열의 크기는 상수로만 지정할 수 있으므로 일반적인 변수로는 불가능하며, 한 번 선언된 이후 값이 바뀌지 않는 const 변수는 활용 가능함.
* 왜 const를 쓰나? -> 컴파일을 실행되기 전에 공간의 크기를 다 알아야 하기 때문에 const를 사용한다.
* 배열의 크기와 같이 상수가 필요한 사항들에 대해, const 변수를 선언하여 활용하면 프로그램의 가독성 및 유지보수에 더 좋음.
* 프로그램 내의 여러가지 수치들을 바꾸어서 실행할 일이 많은 경우, 바꿀 숫자들과 관련한 변수들을 프로그램 앞쪽에 몰아서 선언하면 유지보수가 편리함.
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
* 배열을 활용하여 구간별 데이터를 정리하고, 이를 그래프 형태로 표현할 수 있음.

* Range-Based for Statement
* C++의 range-based for 구문은 별도의 counter 없이 for문이 array 내의 요소들에 대해 loop를 한 번 수행하도록 할 수 있음.
* Range-based for 구문으로 배열의 값을 수정하고자 할 때는 reference를 활용함.
* 만약 reference가 아닌 int 등의 type을 사용할 경우, for 문 내에서 iteration이 수행되며 나오는 값들은 기본적으로 pass-by-value 형식으로 만들어지기 때문에 실제 배열 내의 값을 바꿀 수가 없게 됨.

* Multidimensional Arrays
* You can use arrays with two dimensions to represent tables of values consisting of information arranged in rows and columns.
* Range-based for 구문을 중첩하여 2차원 배열에서의 iteration을 수행
* 처음 들어오는 배열은 2차원이므로 이에 대해 range-based for 구문을 수행하면, 매 iteration마다 접근하는 요소는 1차원 배열이 됨.
* auto는 컴파일러에서 자동으로 자료형을 추론하도록 하는 기능
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
	for (auto const& row : a) { //코드가 명확하면, auto를 써도 명확하다.
		for (auto const& element : row) {
			cout << element << ' ';
		}
		cout << endl;
	}
}
*/

/*
* C++ Standard Library class template vector is similar to class template array, but also supports dynamic resizing
* vector 클래스는 array와 유사하지만 크기 변경이 가능한 C++ Standard Library 내의 클래스
* 크기 조정 이외의 나머지 action에 대한 사용법은 array와 유사함.
* vector 선언: vector<type> name(length);
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
		cout << integers1.at(15) << endl; // at(): member function으로 해당 index 요소 접근 가능(array에서도 가능)
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