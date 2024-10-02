#include <iostream>
using namespace std;

class Car {
    string make;
    string model;
    int year;

    public:
    Car(string make, string model, int year){
        this->make = make;
        this->model = model;
        this->year = year;
    }
    
    void displayInfo(){
        cout << this->make <<" "<< this->model <<" "<< this->year <<endl;
    }
};



int main() {
    Car samochod("BMW","V27",2004);
    samochod.displayInfo();
    
    return 0;
}
