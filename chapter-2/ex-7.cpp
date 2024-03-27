#include <iostream>
using namespace std;

int main(){
    float celsiusTemperature = 0;
    cout << "Enter a degrees Celsius : " ;
    cin >> celsiusTemperature;
    cout << celsiusTemperature << " in Fahrenheit system is "
         << (celsiusTemperature * 9/5 )+ 32;

    return 0;
}