#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;

    for (int i = 1; i <= 200; i++) {
        cout << setw(7) << num * i;
        if (i % 10 == 0){
            cout << endl;
        }
    }
    return 0;
}