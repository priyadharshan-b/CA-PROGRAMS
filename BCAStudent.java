// Save this file as BCAStudent.java inside folder: student/fulltime/bca/
// Compile with: javac -d . BCAStudent.java

package student.fulltime.bca;
import java.util.Scanner;

public class BCAStudent {
    String name, sex;
    int age;
    Scanner sc = new Scanner(System.in);

    public void getdata() {
        System.out.println("Student Name: ");
        name = sc.nextLine();
        System.out.println("Student Sex: ");
        sex = sc.nextLine();
        System.out.println("Student Age: ");
        age = sc.nextInt();
    }

    public void display() {
        System.out.println("Student Details are ");
        System.out.println("Student Name:" + name);
        System.out.println("Student Age:" + age);
        System.out.println("Student Sex:" + sex);
    }
}
