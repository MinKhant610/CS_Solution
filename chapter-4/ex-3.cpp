#include <iostream>
using namespace std;

struct Distance{
    int feet;
    float inches;
};

struct Volume{
    Distance length;
    Distance width;
    Distance heigh;
};

int main(){
    float l,w,h;
    Volume room1 = { {16, 3.5} , {12, 6.25,}, {8, 1.75}};
    /* 
    Volume room1 = { {16, 3.5} , {12, 6.25,}, {8, 1.75}};
    is equal to 
    room1.length.feet = 16;
    room1.length.inches = 3.5
    ....
    */

    l = room1.length.feet + room1.length.inches / 12.0;
    w = room1.width.feet + room1.width.inches / 12.0;
    h = room1.heigh.feet + room1.heigh.inches / 12.0;
    
    cout << "Volume = " << l*w*h << "cubic feet" << endl;

    return 0;
}