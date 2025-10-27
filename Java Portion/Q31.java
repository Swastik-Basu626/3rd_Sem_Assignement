import java.util.Scanner;

class Calculator {
    
    public double addition(int numbers[]) {
        double sum = 0;
        for (double num : numbers) {
            sum += num;
        }
        return sum;
    }
    public double subtraction(int numbers[]) {
        double result = numbers[0];
        for (int i = 1; i < numbers.length; i++) {
            result -= numbers[i];
        }
        return result;
    }
    public double multiplication(int numbers[]) {
        double product = 1;
        for (double num : numbers) {
            product *= num;
        }
        return product;
    }
}

public class Q31 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter how many numbers you want to calculate: ");
        int n = sc.nextInt();
        System.out.println("Enter the numbers");
        int numbers[] = new int[n];
        for (int i = 0; i < n; i++) {
            numbers[i] = sc.nextInt();
        }

        Calculator calc = new Calculator();
        System.out.println("Addition: " + (int)calc.addition(numbers));
        System.out.println("Subtraction: " + (int)calc.subtraction(numbers));
        System.out.println("Multiplication: " + (int)calc.multiplication(numbers));

        sc.close();
    }
}
