#include <iostream>
using namespace std;

int main(){
    // 메모리 변경 == 할당
    // 부가 작용 == 할당을 해서 메모리에 저장되어 있는 값 변경
    
    // explicit type coversion
    // static_cast<type>(expression)
    double x = 3.141592;
    int y = 10;
    cout << "Not casting : " << x + y << endl; // Not casting : 13.1416
    cout << "castiong : " << static_cast<int>(x) + y << endl; // castiong : 13
    return 0;
}