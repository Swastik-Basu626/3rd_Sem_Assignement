interface SpecialArithmetic {
    void all_divisors(int n);
}

class DivisorCalculator implements SpecialArithmetic {
    public void all_divisors(int n) {
        System.out.println("Divisors of " + n + " are:");
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }
}
public class Q33 {
    public static void main(String[] args) {
        java.util.Scanner sc = new java.util.Scanner(System.in);

        System.out.print("Enter an integer: ");
        int num = sc.nextInt();
        DivisorCalculator dc = new DivisorCalculator();
        dc.all_divisors(num);

        sc.close();
    }
}
