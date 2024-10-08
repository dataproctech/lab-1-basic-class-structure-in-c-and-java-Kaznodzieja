#include <iostream>     // Dołączenie biblioteki do obsługi wejścia/wyjścia
using namespace std;    // Użycie przestrzeni nazw std

class Car {         // Definicja klasy Car
    string make;        // Atrybut: marka samochodu
    string model;       // Atrybut: model samochodu
    int year;           // Atrybut: rok produkcji samochodu
    int currentYear;    // Atrybut: bieżący rok

public:     // Publiczny dostęp do metod klasy
    // Konstruktor klasy Car, który inicjalizuje atrybuty
    Car(string make, string model, int year, int currentYear) {
        // Przypisanie wartości
        this->make = make;
        this->model = model;
        this->year = year;
        this->currentYear = currentYear;
    }

    // Metoda do wyświetlania informacji o samochodzie
    void displayInfo() {
        // Wyświetlenie marki, modelu i roku
        cout << this->make << " - " << this->model << " - " << this->year << endl; 
    }

    // Metoda do obliczania wieku samochodu
    int getCarAge() {
        return currentYear - year;
    }

    // Metoda do porównywania dwóch obiektów Car
    bool isSameCar(Car otherCar) {
        // Sprawdzenie, czy marka, model i rok są takie same
        return (this->make == otherCar.make && this->model == otherCar.model && this->year == otherCar.year);
    }
};

int main() {
    // Utworzenie obiektów klasy Car
    Car car1("BMW", "V27", 2004, 2024);
    Car car2("Audi", "M14", 2007, 2024);

    // Wyświetlenie informacji
    cout << "car1:" << endl;
    car1.displayInfo();
    cout << "Wiek samochodu: " << car1.getCarAge() << " lat" << endl << endl;

    cout << "car2:" << endl;
    car2.displayInfo();
    cout << "Wiek samochodu: " << car2.getCarAge() << " lat" << endl << endl;

    // Porównanie dwóch samochodów i wyświetlenie wyniku
    if (car1.isSameCar(car2)) {
        cout << "Samochody są takie same" << endl;
    } else {
        cout << "Samochody są różne" << endl;
    }

    return 0; // Zakończenie programu
}
