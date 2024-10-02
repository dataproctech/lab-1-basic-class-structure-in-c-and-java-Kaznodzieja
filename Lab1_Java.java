public class Car {
    
    String make;
    String model;
    int year;

    public Car(String make, String model, int year){
        this.make = make;
        this.model = model;
        this.year = year;
    }
    
    public void displayInfo(){
        System.out.println(this.make + " / " + model + " / " + year);
    }
    


    public static void main(String[] args) {
        Car carX = new Car("BMW","V27",2004);
        carX.displayInfo();
 
    }
}
