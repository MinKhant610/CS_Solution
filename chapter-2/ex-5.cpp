#include <iostream>
#include <ctype.h>
using namespace std;

int main(){
    char letter;
    cout << "Enter a letter : ";
    cin >> letter;
    cout << islower(letter) << endl;

    return 0;
}