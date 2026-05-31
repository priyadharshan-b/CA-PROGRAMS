import java.util.*;

class Student {
    Scanner sc = new Scanner(System.in);
    String Enrollment_id;
    String Name;
    int sub1, sub2, sub3, total;

    Student() {
        readStudentInfo();
    }

    public void readStudentInfo() {
        System.out.println("Enter Student Details");
        System.out.println("EnrolmentNo: ");
        Enrollment_id = sc.next();
        System.out.print("Name: ");
        Name = sc.next();
        System.out.print("Enter Marks of 3 Subjects: ");
        sub1 = sc.nextInt();
        sub2 = sc.nextInt();
        sub3 = sc.nextInt();
        if (sub1 >= 50 && sub2 >= 50 && sub3 >= 50)
            total = sub1 + sub2 + sub3;
        else
            total = 0;
    }

    public void displayInfo() {
        System.out.println(Enrollment_id + "\t\t" + Name + "\t" + total);
    }
}

public class StudentInfo {
    public static void main(String[] args) {
        Student s[] = new Student[3];
        for (int i = 0; i < 3; i++) {
            s[i] = new Student();
        }
        System.out.println("\t\tStudent Details");
        System.out.println("EnrollmentNo\tName\tTotal");
        for (int i = 0; i < 3; i++) {
            s[i].displayInfo();
        }
    }
}
