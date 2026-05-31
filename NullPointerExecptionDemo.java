public class NullPointerExecptionDemo {
    public static void main(String[] args) {
        String city = null;
        try {
            if (city.equals("Bangalore"))
                System.out.print("Equal");
            else
                System.out.print("Not Equal");
        } catch (NullPointerException e) {
            System.out.println("Null Pointer Exception Caught");
        } finally {
            System.out.println("This is Finally Block after Catching NullPointerException");
        }
    }
}
