#include <iostream>
using namespace std;

struct Point{
    int x;
    int y;
    int z;
};

int main(){
    Point p1, p2;
    cout << "Enter coordinates for p1 : ";
    cin >> p1.x >> p1.y >> p1.z;
    cout << "Enter coordinates for p2 : ";
    cin >> p2.x >> p2.y >> p2.z;
    cout << "Coordinates of p1+p2 are : " << (p1.x + p2.x) << ", " << (p1.y + p2.y) << ", " << (p1.z + p2.z) << endl;

    return 0;
}