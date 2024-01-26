#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 클래스 정의
class RandomInteger{
    private:
        // 데이터 멤버
        int low; 
        int high;
        int value;
    public:
        // 생성자
        RandomInteger(int low, int high);
        // 소멸자
        ~RandomInteger();
        // 합성 복사 생성자의 생성 막기
        RandomInteger(const RandomInteger& random) = delete;
        void print() const; // 접근자 멤버 함수
};
// 클래스 안의 생성자, 소멸자, 접근자 멤버 함수 정의

// 생성자
RandomInteger::RandomInteger(int low, int high)
:low(low), high(high)
{
    srand(time(0));
    int temp = rand();
    value = temp % (high - low + 1) + low;
}

// 소멸자
RandomInteger::~RandomInteger()
{
}

// 접근자 멤버 함수
void RandomInteger::print() const{
    cout << value << endl;
}

// 애플리케이션
int main(){
    RandomInteger r1(100,200);
    cout << "random number of 100 ~ 200 : ";
    r1.print();
    RandomInteger r2(500,1000);
    cout << "random number of 500 ~ 1000 : ";
    r2.print();
    RandomInteger r3(50,100);
    cout << "random number of 50 ~ 100 : ";
    r3.print();
    return 0;
}