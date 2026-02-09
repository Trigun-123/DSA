class Subject {
    void showSubject() {
        System.out.println("Subject is being taught");
    }
}

class Course {
    private Subject subject = new Subject();

    void startCourse() {
        subject.showSubject();
        System.out.println("Course has started");
    }
}


public class composition {
    public static void main(String[] args) {
        Course c = new Course();
        c.startCourse();
    }
}
