// Interface definition
interface Vehicle {
    // Method signatures (without implementation)
    void start();
    void stop();

    // Default method with implementation
    default void honk() {
        System.out.println("Honk honk!");
    }

    // Static method with implementation
    static void repair() {
        System.out.println("Vehicle is being repaired.");
    }
}

// Implementing class Car
class Car implements Vehicle {
    // Implementing interface methods
    @Override
    public void start() {
        System.out.println("Car started.");
    }

    @Override
    public void stop() {
        System.out.println("Car stopped.");
    }
}

// Implementing class Motorcycle
class Motorcycle implements Vehicle {
    // Implementing interface methods
    @Override
    public void start() {
        System.out.println("Motorcycle started.");
    }

    @Override
    public void stop() {
        System.out.println("Motorcycle stopped.");
    }
}

public class Main {
    public static void main(String[] args) {
        // Creating objects of implementing classes
        Car car = new Car();
        Motorcycle motorcycle = new Motorcycle();

        // Calling interface methods
        car.start();
        car.stop();
        car.honk();

        motorcycle.start();
        motorcycle.stop();
        motorcycle.honk();

        // Calling static method of interface
        Vehicle.repair();
    }
}

// OUTPUT

// Car started.
// Car stopped.
// Honk honk!
// Motorcycle started.
// Motorcycle stopped.
// Honk honk!
// Vehicle is being repaired.
