#include <iostream>
#include <ctime>
using namespace std;

// 시간 함수
int main(){
    long elapsed_second = time(0);
    int current_second = elapsed_second % 60;
    // 경과한 분 단위 시간과 현재 분 찾기
    long elapsed_minute = elapsed_second / 60;
    int current_minute = elapsed_minute % 60;
    // 경과한 시간과 시 단위 시간 찾기
    long elapsed_hour = elapsed_minute / 60;
    int current_hour = elapsed_hour % 24;
    // 현재 시간을 출력
    cout << "current time = ";
    cout << current_hour << " : " << current_minute << " : " << current_second << endl;
    return 0;
}