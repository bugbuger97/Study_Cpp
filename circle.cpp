// 구현 파일
// 모든 멤버함수를 정의함.
#include "circle.h"

Circle::Circle(double r)
: radius(r)
{
    if (radius < 0.0)
    {
        assert(false);
    }
}

Circle::Circle()
: radius(0.0)
{}

Circle::Circle(const Circle& circle)
: radius(circle.radius)
{}

Circle::~Circle()
{}

void Circle::set_Radius(double num)
{
    radius = num;
    if (radius < 0.0){
        assert(false);
    }
}

double Circle::get_Radius() const{
    return radius;
}

double Circle::get_Area() const{
    const double PI = 3.14;
    return (PI * radius * radius);
}

double Circle::get_Perimeter() const{
    const double PI = 3.14;
    return (2 * PI * radius);
}