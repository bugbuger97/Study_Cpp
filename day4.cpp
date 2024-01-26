// 정적 데이터 멤버 선언
// 전역 변수 같은 것인가?
/*
정적 데이터 멤버(static data member)는 클래스의 인스턴스가 아닌 클래스 자체에 속하는 멤버 변수임. 
따라서 이러한 변수는 클래스의 모든 인스턴스에서 동일한 값을 공유하게 됨.
정적 데이터 멤버는 전역 변수처럼 사용될 수 있음. 
하나의 클래스에서 생성된 모든 객체가 해당 정적 데이터 멤버를 공유하므로 클래스 간에 데이터를 공유하는 용도로 사용할 수 있음. 
클래스의 인스턴스 없이도 접근이 가능하며, 클래스 이름을 통해 접근할 수 있음.
*/

// 매개 변수가 있는 생성자
#include <iostream>
#include <cassert>
using namespace std;

class Fraction{
    private:
        int num;
        int den;
    public:
        // default constructor
        Fraction(){
            num = 0;
            den = 1;
        }
        // Constructor with 2 parameter
        Fraction(int n, int d = 1){
            assert(d!=0);
            num = n;
            den = d;
        }
        int get_num() {return num;}
        int get_den() {return den;}
        double get_val() {return static_cast<double>(num) / den;}
};

int main(){
    int x(5);
    Fraction twotwo(2,2);
    return 0;
}