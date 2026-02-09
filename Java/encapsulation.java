class Student {
    private String name;

    public String getName() {
        return name;
    }

    public void setName(String newName) {
        this.name = newName;
    }
}

public class encapsulation {
    public static void main(String[] args) {
        Student myObj = new Student();
        myObj.setName("Trigun");
        System.out.println(myObj.getName());
    }
}
