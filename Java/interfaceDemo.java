interface payment{
    void pay(int amount);
}

class CreditCardPayment implements payment {
    public void pay(int amount) {
        System.out.println("Paid " + amount + " using Credit Card");
    }
}   

class UpiPayment implements payment {
    public void pay(int amount) {
        System.out.println("Paid " + amount + " using UPI");
    }
}

class CashPayment implements payment {
    public void pay(int amount) {
        System.out.println("Paid " + amount + " using Cash");
    }
}

public class interfaceDemo {
    public static void main(String[] args) {
        payment p;
        p = new CreditCardPayment();
        p.pay(1000);

        p = new UpiPayment();
        p.pay(500);

        p = new CashPayment();
        p.pay(200);
    }
}
