#include <iostream>
using namespace std;

long hms_to_secs(int hours, int minutes, int seconds){
    return (hours*3600 + minutes*60 + seconds); 
}

int main(){
    string quit;
    int hours, minutes, seconds;
    char colum;
    do{
        cout << "Enter time format 12:59:59 :";
        cin >> hours >> colum >> minutes >> colum >> seconds;
        cout << hms_to_secs(hours, minutes, seconds) << endl;
        cout << "Do another (y / n) ? ";
        cin >> quit;
    }while(quit != "n");

    return 0;
}