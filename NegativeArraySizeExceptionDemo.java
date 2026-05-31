public class NegativeArraySizeExceptionDemo {
    public static void main(String[] args) {
        try {
            int[] array = new int[-10];
        } catch (NegativeArraySizeException obj) {
            obj.printStackTrace();
        }
        System.out.println("Exception Caught and Continuing Execution...");
    }
}
