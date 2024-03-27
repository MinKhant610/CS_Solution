#include <iostream>
#include <iomanip>
using namespace std;

struct employee{
    int number;
    float dollar;
};

int main(){
    employee emp1;
    employee emp2;
    employee emp3;

    cout << "Enter employee number and slary for first employee :";
    cin >> emp1.number >> emp1.dollar;
    cout << "Enter employee number and slary for first employee :";
    cin >> emp2.number >> emp2.dollar;
    cout << "Enter employee number and slary for first employee :";
    cin >> emp3.number >> emp3.dollar;

    cout << setw(8) << "Number " << setw(8) << "Salary" << endl
        << setw(8) << emp1.number << setw(8) << emp1.dollar << endl
        << setw(8) << emp2.number << setw(8) << emp2.dollar << endl
        << setw(8) << emp3.number << setw(8) << emp3.dollar << endl;
        
    return 0;
}