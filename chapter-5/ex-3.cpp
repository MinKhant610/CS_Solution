#include <iostream>
using namespace std;

void zeroSmaller(int &num1, int &num2){
    if (num1 > num2){
        num2 = 0;
    }else{
        num1 = 0;
    }
}

int main(){
    int num1, num2;

    cout << "Enter two number : ";
    cin >> num1 >> num2;
    cout << "Before : " << num1 << " " << num2 << endl;
    zeroSmaller(num1, num2);
    cout << "After :" << num1 << " " << num2 << endl;

    return 0;
}