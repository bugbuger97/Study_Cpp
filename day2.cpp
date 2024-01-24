#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    // implicit type conversion
    bool x = false;
    char y = 'a';
    short z = 45;
    float k = 3.14;

    cout << "type of x + 100 : " << typeid(x + 100).name() << endl; // i -> int
    cout << "value of x + 100 : " << x + 100 << endl;  // 100
    cout << "type of y + 100 : " <<  typeid(y + 100).name() << endl; // i -> int
    cout << "value of y + 100 : " << y + 100 << endl; // 197
    cout << "type of z * 100 : " << typeid(z*100).name() << endl; // i -> int
    cout << "value of z * 100 : " << z*100 << endl; // 4500
    cout << "type of k + 100.01 : " << typeid(k + 100.01).name() << endl; // d -> double
    cout << "value of k + 100.01 : " << k + 100.01 << endl; // 103.15
    return 0;
}