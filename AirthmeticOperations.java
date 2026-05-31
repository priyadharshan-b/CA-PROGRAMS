class AddSub {
    int n1, n2;

    public AddSub(int x, int y) {
        n1 = x;
        n2 = y;
    }

    public int add() {
        return (n1 + n2);
    }

    public int sub() {
        return (n1 - n2);
    }
}

class MulDiv extends AddSub {
    public MulDiv(int x, int y) {
        super(x, y);
    }

    public int mul() {
        return (n1 * n2);
    }

    public int div() {
        return (n1 / n2);
    }
}

public class AirthmeticOperations {
    public static void main(String args[]) {
        MulDiv obj = new MulDiv(20, 10);
        System.out.println("Sum of 20 and 10 =" + obj.add());
        System.out.println("Difference of 20 and 10 =" + obj.sub());
        System.out.println("Product of 20 and 10 =" + obj.mul());
        System.out.println("Result of division 20/10 =" + obj.div());
    }
}
