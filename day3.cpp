#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// 랜덤 숫자 관련 함수
// rand 함수 : 유사 난수(pseudo random)를 생성함.
// 유사 난수는 어떤 시드(seed)를 활용해서 랜덤한 숫자를 생성하므로, 시드가 같다면 동일한 순서의 숫자를 생성함.
// 시드는 첫 번째 랜덤 숫자를 말하는데 기본적으로 1로 설정됨.
// 일반적으로 time(0) 함수를 사용해서 시드를 설정함.

// 숫자 추측 게임
int main(){
    int low = 5;
    int high = 15;
    int try_limit = 5;
    int guess;
    // 랜덤 숫자 생성
    srand(time(0));
    int temp = rand();
    int num = temp % (high - low + 1) + low;
    // 추측을 위한 반복
    int cnt = 1;
    bool found = false;
    while(cnt <= try_limit && !found){
        do{
            cout << "Input Integer of 5 ~ 15 : ";
            cin >> guess;
        }while(guess < 5 || guess > 15);

        if (guess == num){
            found = true;
            break;
        }
        else if (guess > num){
            cout << "less than number" << endl;
        }
        else{
            cout << "more than number" << endl;
        }
        cnt++;
    }
    // 추측에 성공한 경우
    if (found){
        cout << "excellent!! collect!!";
        cout << " answer is " << num << endl;
    }
    // 추측에 실패한 경우
    else{
        cout << "Default!! Lose!!";
        cout << " answer is " << num << endl;
    }
    return 0;
}