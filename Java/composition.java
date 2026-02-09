class Engine {
    void start() {
        System.out.println("Engine started");
    }
}

class Car {
    private Engine engine = new Engine();

    void drive() {
        engine.start();
        System.out.println("Car is moving");
    }
}


public class composition {
    public static void main(String[] args) {
        Car car = new Car();
        car.drive();
    }
}
