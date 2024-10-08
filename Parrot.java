import java.util.ArrayList; // Import biblioteki do dynamicznych tablic
import java.util.Random;    // Import biblioteki do generowania liczb losowych

public class Parrot {
    private ArrayList<String> phrases; // Zbiór fraz, które zna papuga
    private Random random;

    // Konstruktor z pierwszą frazą
    public Parrot(String initialPhrase) {
        phrases = new ArrayList<>();
        phrases.add(initialPhrase); // Dodanie początkowej frazy do zbioru
        random = new Random();
    }

    // Metoda dodająca nową frazę do zbioru
    public void addPhrase(String newPhrase) {
        phrases.add(newPhrase);
    }

    // Metoda wypowiadająca losową frazę z określoną liczbą powtórzeń
    public void say(int n) {
        for (int i = 0; i < n; i++) {
            int randIdx = random.nextInt(phrases.size());
            System.out.println(phrases.get(randIdx));
        }
    }

    public static void main(String[] args) {
        // Utworzenie obiektu klasy Parrot z początkową frazą
        Parrot parrot = new Parrot("Jestem papugą");
        // Dodawanie nowych fraz do zbioru
        parrot.addPhrase("Test test");
        parrot.addPhrase("Raz dwa trzy");
        parrot.addPhrase("Lubię latać");
        parrot.addPhrase("Witam");

        parrot.say(10);
    }
}
