#include <iostream>
#include <cmath>
using namespace std;

// int main(){
//     const double PI = 3.141592653589793238462;
//     double degree = PI / 6;
//     cout << "sin(45) = " << sin(degree) << endl;
//     cout << "cos(45) = " << cos(degree) << endl;
//     cout << "tan(45) = " << tan(degree) << endl;
//     return 0;
// }

int main() {
    const double PI = 3.141592653589793238462;
    int num;
    double side, peri, area;
    do{
        cout << "Input number of sides(more than four) : ";
        cin >> num;
    } while(num < 4);
    do{
        cout << "Input length of sides : ";
        cin >> side;
    }while(side<=0.0);
    peri = num * side;
    area = (num * pow(side,2)) / (num * tan(PI / num));
    cout << "peri : " << peri << endl;
    cout << "area : " << area << endl;
    return 0;
}