class Student {

    String register(String name, int year) {
        return "REG" + year + name.substring(0, 2).toUpperCase();
    }

    String register(String name, int year, String branch) {
        return year + branch.toUpperCase() + name.substring(0, 2).toUpperCase();
    }

    String register(String name, int year, String branch, int rollNo) {
        return "PES2UG" + year + branch.toUpperCase() + rollNo;
    }

    public static void main(String[] args) {

        Student s = new Student();

        System.out.println(s.register("Trigun", 2023));
        System.out.println(s.register("Trigun", 2023, "CSE"));
        System.out.println(s.register("Trigun", 23, "CS", 656));
    }
}


