#include <iostream>  // Biblioteka do obsługi wejścia/wyjścia
#include <vector>    // Biblioteka do użycia dynamicznych tablic (wektorów)
#include <cstdlib>   // Biblioteka do generowania liczb losowych
#include <ctime>     // Biblioteka do uzyskiwania czasu systemowego

using namespace std;

class Parrot { // Definicja klasy Parrot
    vector<string> phrases; // Zbiór fraz, które zna papuga

public:
    // Konstruktor z pierwszą frazą
    Parrot(string initialPhrase) {
        phrases.push_back(initialPhrase); // Dodanie początkowej frazy do zbioru
        srand(time(0));  // Ustawienie generatora liczb losowych
    }

    // Metoda dodająca nową frazę do zbioru
    void addPhrase(string newPhrase) {
        phrases.push_back(newPhrase);
    }

    // Metoda wypowiadająca losową frazę z określoną liczbą powtórzeń
    void say(int n) {
        for (int i = 0; i < n; i++) {
            int randIdx = rand() % phrases.size();
            cout << phrases[randIdx] << endl;
        }
    }
};

int main() {
    // Utworzenie obiektu klasy Parrot z początkową frazą
    Parrot parrot("Jestem papugą");
    // Dodawanie nowych fraz do zbioru
    parrot.addPhrase("Test test");
    parrot.addPhrase("Raz dwa trzy");
    parrot.addPhrase("Lubię latać");
    parrot.addPhrase("Witam");

    parrot.say(10);

    return 0;
}
