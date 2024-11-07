// �� �������� Ȱ��
/*
#include<iostream>
using namespace std;

bool functionToRun() {
	cout << "Function is executed!" << endl;
	return true;
}

int main() {
	bool condition = true;

	cout << "First Case" << endl;
	condition&& functionToRun();

	condition = false;
	cout << "Second Case" << endl;
	condition&& functionToRun();

	return 0;
}
*/

// ��ü & ������
/*
#include <iostream>
using namespace std;

class MyClass {
public:
	void display() {
		cout << "MyClass object is alive!" << endl;
	}
};

int main() {
	MyClass obj;
	cout << "��ü�� ���� ����Լ� ȣ��\n";
	obj.display();

	cout << "\n\n";

	MyClass* objPtr = &obj; // ��ü�� ����Ű�� ������ ����

	cout << "��ü �����͸� ���� ����Լ� ȣ��\n";
	objPtr->display();

	return 0;
}
*/

// ��ü & ������ - �����Ҵ�
/*
#include <iostream>
using namespace std;

class MyClass {
public:
	void display() {
		cout << "MyClass object is alive!" << endl;
	}
};

int main() {
	MyClass* obj = new MyClass(); // ��ü�� �������� �����ϰ� �����ͷ� ����

	obj->display(); // ��ü�� ��� �Լ� ȣ��

	// ��ü�� delete�Ͽ� �޸𸮸� �����ϰ� �����͸� nullptr�� ����
	delete obj;
	obj = nullptr;

	// nullptr üũ �� ��� �Լ� ȣ�� �õ�
	if (obj != nullptr) {
		obj->display();
	}
	else {
		cout << "Object is nullptr." << endl;
	}

	return 0;
}
*/

// �����Ҵ� -> vector
/*
#include<iostream>
#include<vector>
using namespace std;

int main() {
	int size;
	cout << "Enter the size of the array: ";
	cin >> size;

	std::vector<int> array(size); // �迭�� ���� �Ҵ�
	// int* array = new int[size];
	// std::unique_ptr<int[]> array(new int[size]);

	for (int i = 0; i < size; ++i) {
		array[i] = i * 2;
		cout << "Element " << i << ": " << array[i] << endl;
	}

	return 0;
}
*/

// Pointer & Built-in Array
/*
#include<iostream>
using namespace std;

int cubeByValue(int);
void cubeByRef(int&);
void cubeByPointer(int*);

int main() {
	int num{ 3 };
	int* numPtr{ &num };

	cout << "&num: " << &num << endl;
	cout << "numPtr: " << numPtr << endl;

	cout << "num: " << num << endl;
	cout << "*numPtr: " << *numPtr << endl;

	cout << "cubeByValue(num): " << cubeByValue(num) << endl;

	cout << "cubeByRef(num): ";
	cubeByRef(num);
	cout << num << endl;
	
	cout << "cubeByPointer(num): ";
	cubeByPointer(numPtr);
	cout << *numPtr << endl;

	int b[]{ 10, 20, 30, 40 };
	numPtr = b + 1;
	for (size_t i{ 0 }; i < 4; i++) {
		cout << "b[" << i << "] = " << b[i] << "\n";
	}
	for (size_t j{ 0 }; j < 4; j++) {
		cout << "*(b + " << j << ") = " << *(b + j) << "\n";
	}
	cout << "*(numPtr - 1) = " << *(numPtr - 1) << "\n";
	for (size_t k{ 0 }; k < 3; k++) {
		cout << "*(numPtr + " << k << ") = " << *(numPtr + k) << endl;
	}
}

int cubeByValue(int n) {
	return n * n * n;
}

void cubeByRef(int& n) {
	n = n * n * n;
}

void cubeByPointer(int* nPtr) {
	*nPtr = *nPtr * *nPtr * *nPtr;
}
*/

// vector
/*
#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int> vec(5);
	for (int& item : vec) {
		//cout << "input vector element: ";
		cin >> item;
	}
	for (int& item : vec) {
		item *= 2;
		cout << item << " ";
	}
	cout << endl;
}
*/

// Exception Handling
/*
#include <iostream>
#include <string>
using namespace std;

int func(int); // function prototype

int main() {
	int c;
	cout << "enter error code: ";
	while (cin >> c) {
		try {
			func(c);
		}
		catch(char x){
			cout << "Char: " << x << endl;
		}
		catch (int x) {
			cout << "Int: " << x << endl;
		}
		catch(string& s) {
			cout << "String: " << s << endl;
		}
		catch (...) {
			cout << "Unknown error" << endl;
		}
		cout << "enter error code: ";
	}
}
int func(int c) {
	if (c == 1) {
		throw 10;
	}
	else if (c == 2) {
		throw string("hi");
	}
	else if (c == 3) {
		throw 'a';
	}
	else if (c == 4) {
		throw true;
	}
	return 0;
}
*/

// Recursive backward print of array
#include<iostream>
using namespace std;

void recursiveBackward(const int*, size_t);

int main() {
	int b[4]{ 10, 20, 30, 40 };
	cout << "\nTest of the recursiveBackward function\n";
	recursiveBackward(b, 4);
}

void recursiveBackward(const int* b, size_t Size) {
	int i = Size-1;
	if (i <= 0) {
		cout << b[i] << endl;
	}
	else {
		cout << b[i] << " ";
		recursiveBackward(b, size_t (Size - 1));
	}
}