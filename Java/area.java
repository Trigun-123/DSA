class Rect {
    int a;
    int b;

    Rect(int x, int y) {
        a = x;
        b = y;
        System.out.println("Area of rectanagle is: " + a*b);
    }

    void disp() {
        System.out.println("disp");
    }
}

public class area {
    public static void main(String[] args) {
        Rect r = new Rect(10, 20);
        r.disp();
        
        System.out.println(r.a);
        System.out.println(r.b);
    }
}
