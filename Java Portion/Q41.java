public class Q41 {
    public static void main(String[] args) {
        try {
            int a = 10, b = 0;
            int result = a / b;   
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            System.out.println("Error: Division by zero is not allowed.");
        }
        try {
            int[] arr = {1, 2, 3};
            System.out.println("Accessing 5th element: " + arr[4]); 
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Error: Array index out of range.");
        }
        try {
            String str = null;
            System.out.println("Length of string: " + str.length()); 
        } catch (NullPointerException e) {
            System.out.println("Error: Null reference encountered.");
        }

        System.out.println("\nProgram executed successfully after handling all exceptions.");
    }
}
