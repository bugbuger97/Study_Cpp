/*
정적 데이터 멤버 : 모든 인스턴스에 포함되는 멤버(클래스간의 전역 변수 같은 것임.)

<static data member 선언>
class num{
    private:
        static int count; // 정적 데이터 멤버
};

<정작 데이터 멤버 초기화>
int num::count = 0;

메모리에서는 정적 멤버 영역과 인스턴스 멤버 영역이 분리되어 있음.
*/

// 정적 멤버
#include <iostream>
using namespace std;

class Number{
    private:
        int num;
        static int cnt;
    public:
        Number(int num);
        Number();
        ~Number();
        Number(const Number& num);
        static int get_Count(); 
};

// 정적 데이터 멤버 초기화
int Number::cnt=0;

Number::Number(int n)
: num(n)
{
    cnt++;
}
Number::Number()
: num(0.0)
{
    cnt++;
}
Number::Number(const Number& number)
:num(number.num)
{
    cnt++;
}
Number::~Number()
{
    cnt--;
}
int Number::get_Count()
{
    return cnt;
}

int main(){
    {
        Number n1(1);
        Number n2(2);
        Number n3;
        Number n4(n1);
        Number n5(n2);
        cout << "Number of Instance : " << n5.get_Count() << endl;
    }
    cout << "Number of Instance : " << Number::get_Count() << endl; 
    return 0;
}