#include <iostream>
using namespace std;

int main(){

    int user_input;
    float temperature;
    cout << "Type 1 to convert Fahrenheit to Celsius , " << endl;
    cout << "     2 to convert Celsius to Fahrenheit : ";
    cin >> user_input;

    switch (user_input){
        case 1 : 
        cout << "Enter temperature in Fahrenheit : ";
        cin >> temperature;
        cout << "In Celsius that's " <<  (temperature - 32) * 5 / 9 << endl; 
        break;

        case 2 :
        cout << "Enter temperature in Celsius : ";
        cin >> temperature;
        cout << "In Fahrenheit that's " <<  (temperature * 9 / 5) + 32 << endl; 
        break;

        default :
        cout << "Wrong input !!! " << endl;
        break;
        
    }

    return 0;
}