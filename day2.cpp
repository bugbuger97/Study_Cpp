#include <iostream>
using namespace std;

int main(){
    // Logic expression
    int age;
    bool eligible;
    cout << "Enter your age : ";
    cin >> age;
    eligible = (age >= 25 && age <= 80);
    if(eligible) cout << "you are eligible to rent to a car";
    else cout << "you are not eligible to rent to a car";
    
    return 0;
}