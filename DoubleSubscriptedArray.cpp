#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"DoubleSubscriptedArray.h"
using namespace std;

DoubleSubscriptedArray::DoubleSubscriptedArray(int rowSizeEntered, int columnSizeEntered)
	:ptr(nullptr) {
	if (rowSizeEntered > 0) {
		rowSize = rowSizeEntered;
	}
	else {
		throw invalid_argument("Row size must be > 0");
	}
	if (columnSizeEntered > 0) {
		columnSize = columnSizeEntered;
	}
	else {
		throw invalid_argument("Column size must be > 0");
	}
	ptr = new int[rowSize * columnSize];

	for (size_t loop{ 0 }; loop < rowSize * columnSize; ++loop) {
		ptr[loop] = 0;
	}
}

DoubleSubscriptedArray::DoubleSubscriptedArray(const DoubleSubscriptedArray& arr)
	:rowSize{ arr.getRowSize() }, columnSize{ arr.getColumnSize() }, ptr{ new int[rowSize * columnSize] } {
	for (size_t loop{ 0 }; loop < rowSize * columnSize; ++loop) {
		ptr[loop] = arr.ptr[loop];
	}
}

DoubleSubscriptedArray::~DoubleSubscriptedArray() {
	delete[] ptr;
}

size_t DoubleSubscriptedArray::getRowSize() const {
	return rowSize;
}

size_t DoubleSubscriptedArray::getColumnSize() const {
	return columnSize;
}

bool DoubleSubscriptedArray::operator==(const DoubleSubscriptedArray& right) const {
	if (rowSize * columnSize != right.rowSize * right.columnSize) {
		return false;
	}
	for (size_t i{ 0 }; i < rowSize * columnSize; i++) {
		if (ptr[i] != right.ptr[i]) {
			return false;
		}
	}
	return true;
}

bool DoubleSubscriptedArray::operator!=(const DoubleSubscriptedArray& right) const {
	if (rowSize * columnSize != right.rowSize * right.columnSize) {
		return true;
	}
	for (size_t i{ 0 }; i < rowSize * columnSize; i++) {
		if (ptr[i] != right.ptr[i]) {
			return true;
		}
	}
	return false;
}

const DoubleSubscriptedArray& DoubleSubscriptedArray::operator=(const DoubleSubscriptedArray& right) {
	if (&right != this) {
		if (columnSize * rowSize != right.columnSize * right.rowSize) {
			delete[] ptr;
			rowSize = right.rowSize;
			columnSize = right.columnSize;
			ptr = new int[rowSize * columnSize];
		}
		for (size_t i{ 0 }; i < rowSize * columnSize; ++i) {
			ptr[i] = right.ptr[i];
		}
	}
	return *this;
}

/*
* 0 ~ 8
00(0) 01(1) 02(2)
10(3) 11(4) 12(5)
20(6) 21(7) 22(8)

00(0) 01(1) 02(2) 03(3)
10(4) 11(5) 12(6) 13(7)
*/

int DoubleSubscriptedArray::operator()(size_t rowSubscript, size_t columnSubscript) const {
	if ((rowSubscript < 0 || rowSubscript >= rowSize) || (columnSize < 0 || columnSubscript >= columnSize)){
		throw invalid_argument("One or both subscripts out of range");
	}
	return ptr[rowSize * rowSubscript + columnSubscript * (columnSize - columnSubscript)];
}

int& DoubleSubscriptedArray::operator()(size_t rowSubscript, size_t columnSubscript) {
	if ((rowSubscript < 0 || rowSubscript >= rowSize) || (columnSize < 0 || columnSubscript >= columnSize)) {
		throw invalid_argument("One or both subscripts out of range");
	}
	return ptr[rowSize * rowSubscript + columnSubscript * (columnSize - columnSubscript)];
}

istream& operator>>(istream& input, DoubleSubscriptedArray& a) {
	for (size_t i{ 0 }; i < a.rowSize * a.columnSize; ++i) {
		input >> a.ptr[i];
	}
	return input;
}

ostream& operator<<(ostream& output, DoubleSubscriptedArray& a) {
	size_t count = 0;
	for (size_t i{ 0 }; i < a.getRowSize(); ++i) {
		for (size_t j{ 0 }; j < a.getColumnSize(); ++j) {
			output << a.ptr[count] << " ";
			count++;
		}
		output << endl;
	}
	output << endl;
	return output;
}