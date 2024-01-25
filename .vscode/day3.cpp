#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    // explicit type conversion(casting)

    // declaration
    float pi = 3.14;
    int y = 3;
    // implicit type casting
    cout << "implicit type casting : " << pi + y << endl;
    cout << "a type of pi + y : " << typeid(pi + y).name() << endl;
    cout << "explicit type casting : " << static_cast<int>(pi) + y << endl;
    cout << "a type of pi + y : " << typeid(static_cast<int>(pi) + y).name() << endl;
    return 0;
}