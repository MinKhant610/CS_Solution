#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    char ch;
    unsigned long total = 0;

    cout << "Enter a number : ";
    cin >> ch;

    while ((ch =getche()) ! = '\r'){
        total = total * 10 + ch - '0';
    }

    cout << "Number is : " << total;
    return 0;
}
