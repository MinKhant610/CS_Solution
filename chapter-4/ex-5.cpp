#include <iostream>
using namespace std;

struct Date{
    int month;
    int day;
    int year;
};

int main(){
    Date date;
    char slash;
    cout << "Eneter date in fromat MM/DD/YY  : ";
    cin >> date.month >> slash >>  date.day >> slash >> date.year;

    cout << "Date : " << date.month << "/" << date.day << "/" << date.year << endl;

    return 0;
}