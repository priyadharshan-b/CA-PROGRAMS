public class MethodOverloadingDemo {

    int addition() {
        return (10 + 10);
    }

    int addition(int x, int y) {
        return (x + y);
    }

    float addition(float a, float b) {
        return (a + b);
    }

    public static void main(String args[]) {
        MethodOverloadingDemo a = new MethodOverloadingDemo();
        System.out.println("By Using Default Values, Sum is : " + a.addition());
        System.out.println("Sum of Two Integer Values(10 and 20) is: " + a.addition(10, 20));
        System.out.println("Sum of Two Float values(10.5 and 20.5) is: " + a.addition(10.2f, 20.3f));
    }
}
