#include <iostream>
using namespace std;

double power(double n, int p = 2){
    double result = n;
    for (int i =1; i < p; i++){
        result*=n;
    }
    return result;
}

int main(){
    double num;
    int pow;
    cout << "Enter number and power : ";
    cin >> num >> pow;
    cout << "Default call is " << power(num) << endl;
    cout << num << " power " << pow << " is " << power(num, pow) << endl;

    return 0;
}