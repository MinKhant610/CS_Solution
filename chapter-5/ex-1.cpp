#include <iostream>
using namespace std;

const float PI = 3.14;

float circarea(float radius){
    return (PI * radius * radius);
}

int main(){
    float radius;
    cout << "Enter radius : " ; 
    cin >> radius;
    cout << "Area of the circle : " << circarea(radius) << endl;

    return 0;
}