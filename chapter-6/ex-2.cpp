#include <iostream>
using namespace std;

const double toll = 0.5;
const char ESC = 27;

class tollBooth{
    private:
        unsigned int totalCars;
        double totalCash;
    public:
        tollBooth(){
            totalCars = 0;
            totalCash = 0;
        }
        void payingCar(){
            totalCars++;
            totalCash += toll;
        }
        void nopayCar(){
            totalCars++;
        }
        void display() const {
            cout << "Total number of cars " << totalCars << endl;
            cout << "Total cash collected " << totalCash << endl;
        }
};

int main(){
    tollBooth toll;
    char ch;

    cout << "Enter 0 for each non-paying car " << endl;
    cout << "Enter 1 for each paying car" << endl;
    cout << "ESC to exit" << endl;

    do{
        cin >> ch;
        if (ch == '0'){
            toll.nopayCar();
        }
        if (ch == '1'){
            toll.payingCar();
        }
    }while(ch != ESC);
    toll.display();
    return 0;
}