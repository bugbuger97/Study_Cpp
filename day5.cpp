#include <iostream>
using namespace std;

// return-by-reference
// 복사로 인해서 발생하는 비용을 줄이기 위해 참조로 리턴을 하는 것이 좋음.
// 그러나, 호출되는 함수에서 객체를 생성하면, 함수가 종료된 이후에는 객체가 사라짐.
// 그렇기 때문에, 참조로 리턴을 할 때는 조심해야함.

// return-by-pointer : 사용하지 않음.

// array
int main(){
    int i = 1; 
    int scores[i]={1}; // 여기서 i는 const로 지정해서 들어간다. 
    //i가 run time 중에 변화한 시도가 있으면, const로 취급하지 못해서 error가 발생함.
    cout << scores[0] << endl;
    return 0;
}