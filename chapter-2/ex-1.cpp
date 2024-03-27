#include <iostream>
using namespace std;

int main(){
   float gallons, cubic_foot;

   cout << "Enter quantity in gallons: ";
   cin >> gallons;
   cubic_foot = gallons / 7.481;
   cout << "Equivalent in cubic feet is " << cubic_foot << endl;
   return 0;
}