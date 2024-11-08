#pragma once

class Rectangle {
	friend std::ostream& operator << (std::ostream&, const Rectangle&);
public:
	explicit Rectangle(double = 1.0, double = 1.0);
	void setWidth(double w);
	void setLength(double l);
	double getWidth() const;
	double getLength() const;
	double perimeter() const;
	double area() const;

	bool operator==(const Rectangle&) const;
	bool operator!=(const Rectangle&) const;
	bool operator>(const Rectangle&) const;
	bool operator<(const Rectangle&) const;
	Rectangle operator+(const Rectangle&) const;
	Rectangle operator-(const Rectangle&) const;
	void operator+=(const Rectangle&);
	void operator-=(const Rectangle&);

private:
	double length;
	double width;
};