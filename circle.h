// 클래스의 데이터 멤버와 멤버 함수의 선언을 제공하는 인터페이스 파일

#ifndef CIRCLE_H // Those are called preprocessor commands. In this case, they are being used to insure that the given header file doesn't get included more than once, to prevent multiple definition errors.
#define CIRCLE_H
#include <iostream>
#include <cassert>
using namespace std;

class Circle
{
    private:
        double radius;
    public:
        Circle(double radius);
        Circle();
        Circle(const Circle& circle);
        ~Circle();
        void set_Radius(double radius);
        double get_Radius() const;
        double get_Area() const;
        double get_Perimeter() const;
};
#endif