#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // declaration
    int start_day;
    int days_in_month;
    int col = 1;
    // validation of days in a month
    do{
        cout << "Enter the number of day (28,29,30,31) : ";
        cin >> days_in_month;
    }while(days_in_month < 28 || days_in_month > 31);
    // 요일 유효성 검사
    do{
        cout << "Input first day of week(0 ~ 6) : ";
        cin >> start_day;
    }while(start_day < 0 || start_day > 6);
    // 제목 출력
    cout << endl;
    cout << "Son Mon Tue Wed Thr Fri Sat" << endl;
    cout << "--- --- --- --- --- --- ---" << endl;
    // 달력의 앞쪽 여백 출력
    for (int space = 0; space < start_day; space++){
        cout << "    ";
        col++;
    }
    // 달력 출력
    for (int day = 1; day <= days_in_month; day++){
        cout << setw(3) << day << " ";
        col++;
        if (col > 7){
            cout << endl;
            col = 1;
        }
    }
    return 0;
}