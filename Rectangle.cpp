#include<iostream>
#include<string>
#include"Rectangle.h"
using namespace std;

Rectangle::Rectangle(double width, double length) {
	setWidth(width);
	setLength(length);
}

void Rectangle::setWidth(double w) {
	width = w;
}

void Rectangle::setLength(double l) {
	length = l;
}

double Rectangle::getWidth() const{
	return this->width;
}

double Rectangle::getLength() const {
	return this->length;
}

double Rectangle::area() const {
	return this->width * this->length;
}

double Rectangle::perimeter() const {
	return (this->width * 2) + (this->length * 2);
}

bool Rectangle::operator==(const Rectangle& rec) const {
	if ((this->width == rec.getWidth()) && (this->length == rec.getLength())) {
		return true;
	}
	else {
		return false;
	}
}

bool Rectangle::operator>(const Rectangle& rec) const {
	if (this->area() > rec.area()) {
		return true;
	}
	else {
		return false;
	}
}

bool Rectangle::operator<(const Rectangle& rec) const {
	if (this->area() < rec.area()) {
		return true;
	}
	else {
		return false;
	}
}

bool Rectangle::operator!=(const Rectangle& rec) const {
	if ((this->width != rec.getWidth()) || (this->length != rec.getLength())) {
		return true;
	}
	else {
		return false;
	}
}

Rectangle Rectangle::operator+(const Rectangle& rec) const {
	Rectangle temp;
	temp.setLength(this->length + rec.getLength());
	temp.setWidth(this->width + rec.getWidth());
	return temp;
}

Rectangle Rectangle::operator-(const Rectangle& rec) const {
	Rectangle temp;
	temp.setLength(this->length - rec.getLength());
	temp.setWidth(this->width - rec.getWidth());
	return temp;
}

void Rectangle::operator+=(const Rectangle& rec) {
	this->setLength(this->length + rec.getLength());
	this->setWidth(this->width + rec.getWidth());
}

void Rectangle::operator-=(const Rectangle& rec) {
	this->setLength(this->length - rec.getLength());
	this->setWidth(this->width - rec.getWidth());
}

ostream& operator<<(ostream& output, const Rectangle& rec) {
	output << "length = " << rec.getLength() << "; width = " << rec.getWidth() << "; perimeter = " << rec.perimeter() << "; area = " << rec.area();
	return output;
}