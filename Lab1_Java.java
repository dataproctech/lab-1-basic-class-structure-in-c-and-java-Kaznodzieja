public class Lab1_Java { // Definicja klasy

    String make;        // Atrybut: marka samochodu
    String model;       // Atrybut: model samochodu
    int year;           // Atrybut: rok produkcji samochodu
    int currentYear;    // Atrybut: bieżący rok

    // Konstruktor klasy, który inicjalizuje atrybuty
    public Lab1_Java(String make, String model, int year, int currentYear) {
        // Przypisanie wartości
        this.make = make;
        this.model = model;
        this.year = year;
        this.currentYear = currentYear;
    }

    // Metoda do wyświetlania informacji o samochodzie
    public void displayInfo() {
        System.out.println(this.make + " - " + this.model + " - " + this.year);
    }

    // Metoda do obliczania wieku samochodu
    public int getCarAge() {
        return currentYear - year;
    }

    // Metoda do porównywania dwóch obiektów Lab1_Java
    public boolean isSameCar(Lab1_Java otherCar) {
        return this.make.equals(otherCar.make) && this.model.equals(otherCar.model) && this.year == otherCar.year;
    }

    public static void main(String[] args) {
        // Utworzenie obiektów klasy
        Lab1_Java car1 = new Lab1_Java("BMW", "V27", 2004, 2024);
        Lab1_Java car2 = new Lab1_Java("Audi", "M14", 2007, 2024);

        // Wyświetlenie informacji
        System.out.println("car1:");
        car1.displayInfo();
        System.out.println("Wiek samochodu: " + car1.getCarAge() + " lat\n");

        System.out.println("car2:");
        car2.displayInfo();
        System.out.println("Wiek samochodu: " + car2.getCarAge() + " lat\n");

        // Porównanie dwóch samochodów i wyświetlenie wyniku
        if (car1.isSameCar(car2)) {
            System.out.println("Samochody są takie same");
        } else {
            System.out.println("Samochody są różne");
        }
    }
}
