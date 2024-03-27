#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inches;
};

Distance maxDistance(Distance d1, Distance d2){
    if (d1.feet > d2.feet){
        return d1;
    }
    if (d2.feet > d1.feet){
        return d2;
    }
    if (d1.inches > d2.inches){
        return d1;
    }else{
        return d2;
    }
}

void display(Distance d){
    cout << d.feet << " " << d.inches << endl;
}

int main(){

    Distance d1,d2,d3;

    cout << "Enter distance feet inches d1 : ";
    cin >> d1.feet >> d1.inches;
    cout << "Enter distance feet inches d2 : ";
    cin >> d2.feet >> d2.inches;

    cout << "d1 = ";
    display(d1);
    cout << "d2 = ";
    display(d2);

    cout << "Larger distance is ";
    d3 = maxDistance(d1, d2);

    display(d3);

    return 0;

}