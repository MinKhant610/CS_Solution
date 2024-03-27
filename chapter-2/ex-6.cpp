#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const double british = 1.487;
    const double french = 0.172;
    const double german = 0.582;
    const double japan = 0.00955;
    double dollar = 0;

    cout << "Enter an amount of dollars : ";
    cin >> dollar;
    cout << (dollar/british) << setw(8)<< "pound" << endl;
    cout << (dollar/french) << setw(8) << "frank" << endl;
    cout << (dollar/german) << setw(8) << "mark" << endl;
    cout << (dollar/japan) << setw(8) << "yen"<< endl;

    return 0;
}