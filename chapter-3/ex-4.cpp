#include <iostream>
using namespace std;

int main(){
    float num1, num2;
    char oper;
    string exit;
    
    do {
        cout << "Enter first number, operator, second number : " ;
        cin >> num1 >> oper >> num2;

        switch (oper){
            case '+':
            cout << "Answer = " << num1 + num2 << endl;
            cout << "Do another (y / n) ? ";
            cin >> exit;
            break;

            case '-':
            cout << "Answer = " << num1 - num2 << endl;
            cout << "Do another (y / n) ? ";
            cin >> exit;
            break;

            case '*':
            cout << "Answer = " << num1 * num2 << endl;
            cout << "Do another (y / n) ? ";
            cin >> exit;
            break;

            case '/':
            cout << "Answer = " << num1 / num2 << endl;
            cout << "Do another (y / n) ? ";
            cin >> exit;
            break;

            default : 
            cout << "Something Wrong  !!! " << endl;
            break;
        }

    }while(exit != "n");

    return 0;
}