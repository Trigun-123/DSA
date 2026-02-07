abstract class Teacher {
    abstract void teach();
    void attend() {
        System.out.println("Teacher takes attendance.");
    }
}

class SchoolTeacher extends Teacher {
    @Override
    void teach() {
        System.out.println("School teacher teaches basic subjects.");
    }
}

class CollegeProf extends Teacher {
    @Override
    void teach() {
        System.out.println("College professor teaches advanced subjects.");
    }
}

public class abstraction {
    public static void main(String[] args) {
        Teacher t1 = new SchoolTeacher();
        t1.teach();
        t1.attend();
        System.out.println();
        Teacher t2 = new CollegeProf();
        t2.teach();
        t2.attend();
    }
}
