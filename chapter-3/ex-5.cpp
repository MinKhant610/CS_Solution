#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <=5; i++){
        for(int j = 5; j > i; j--){
            cout << " ";
        }
        for (int z = 1; z < i; z++){
            cout << "*";
        }
        for (int z = 1; z < i; z++){
            cout << "*";
        }
        cout << "*" << endl;
    }
    return 0;
}