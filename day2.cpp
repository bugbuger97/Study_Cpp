#include <iostream>
using namespace std;

int main(){
    // 여러 방향의 조건 분기의 형태
    // Non-compact
    /*
    if (condition 1)
        statement1;
    else
        if (condition 2)
            statement2;
        else
            if (condition 3)
                statement3;
            else 
                if (condition 4)
                    statement4;
                else
                    statement5;
    */
    // Compact
    /*
    if (condition 1)
        statement1;
    else if (condition 2)
        statement2;
    else if (condition 3)
        statement3;
    else if (condition 4)
        statement4;
    else
        statement5;
    */
    return 0;
}