#include <iostream>
using namespace std;

enum employeeType {
    laborer, secretary, manager, accountant, executive, researcher
};

int main(){

    employeeType etype;
    char letter;

    cout << "Enter employee (first letter only) " << endl
    << "laborer , secretary, manager " << endl 
    << "accountant, executive, researcher) : ";
    cin >> letter;

    switch (letter) {
        case 'l':
            etype = laborer;
            break;

        case 's':
            etype = secretary;
            break;

        case 'm':
            etype = manager;
            break;

        case 'a':
            etype = accountant;
            break;

        case 'e':
            etype = executive;
            break;

        case 'r':
            etype = researcher;
            break;

        default:
            cout << "There is no such title!";
            break;
    }

    switch (etype){
        case laborer :
        cout << "Employee type is laborer" << endl;
        break;

        case secretary :
        cout << "Employee type is secretary" << endl;
        break;

        case manager :
        cout << "Employee type is manager" << endl;
        break;

        case accountant :
        cout << "Employee type is accountant" << endl;
        break;

        case executive :
        cout << "Employee type is executive" << endl;
        break;

        case researcher :
        cout << "Employee type is researcher" << endl;
        break;
        
        default :
        cout << " No employee type " << endl;
        break;
        
    }

    return 0;
}