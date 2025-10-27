public class Q42 {
    public static void main(String[] args) {
        try {
            int[] arr = {10, 20, 30};
            System.out.println("Accessing 5th element: " + arr[4]); 
            try {
                String str = null;
                System.out.println("String length: " + str.length()); 
            } catch (NullPointerException e) {
                System.out.println("Inner Catch: Null pointer exception handled.");
            }

        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Outer Catch: Array index out of bound exception handled.");
        }

        System.out.println("\nProgram executed successfully after handling exceptions.");
    }
}
