#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // Using EOF in a file
    int sum = 0;
    int num;
    ifstream infile;
    // Open a file
    infile.open("numbers.txt");
    // loop
    while(infile >> num){
        sum += num;
    }
    cout << "sum = " << sum;
    infile.close();
    return 0;
}