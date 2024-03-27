#include <iostream>
using namespace std;

struct Time{
    int hour, minutes, seconds;
};

int main(){
    Time t1;
    char slash;
    cout << "Enter time : ";
    cin >> t1.hour >> slash >>  t1.minutes >> slash >> t1.seconds;
    long total = t1.hour*3600 + t1.minutes*60 + t1.seconds;

    cout << "Total seconds " << total << endl;

    return 0;
}