#include <iostream>
using namespace std;

int main(){
    // 메모리의 상태를 조작하는  행위 : side effect
    // 리터널 : 부가 작용( == 메모리 조작)이 없이 값을 나타냄.
    // false // Boolean literal
    // 1234L // long integer literal
    
    // Parenthetical expression
    int x = 5;
    cout << "Value with parentheses : " << (x+5) * 5 << endl;
    cout << "Value without parentheses : " << x + 5 * 5 << endl << endl;
    // printing the second expression with and without parentheses
    cout << "Value with parentheses : " << 10 / (x+5) << endl;
    cout << "Value without parentheses : " << 10 / x + 1;
    return 0;
}