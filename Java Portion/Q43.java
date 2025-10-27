import java.util.Scanner;
class EvenNumberException extends Exception {
    public EvenNumberException(String message) {
        super(message);
    }
}
class ValueTooLargeException extends Exception {
    public ValueTooLargeException(String message) {
        super(message);
    }
}
public class Q43 {
    public static void validateNumber(int num) throws EvenNumberException, ValueTooLargeException {
        if (num % 2 == 0) {
            throw new EvenNumberException("Error: Even numbers are not allowed!");
        }
        if (num > 2000) {
            throw new ValueTooLargeException("Error: Number greater than 2000 is not allowed!");
        }
        System.out.println("Valid number accepted: " + num);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            System.out.print("Enter a number: ");
            int number = sc.nextInt();
            validateNumber(number);

        } catch (EvenNumberException e) {
            System.out.println(e.getMessage());
        } catch (ValueTooLargeException e) {
            System.out.println(e.getMessage());
        } catch (Exception e) {
            System.out.println("Unexpected error: " + e);
        } finally {
            System.out.println("\nProgram executed successfully with custom exception handling.");
            sc.close();
        }
    }
}
