import java.util.Scanner;

public class Q23 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the square matrix: ");
        int n = sc.nextInt();
        int[][] arr = new int[n][n];
        System.out.println("Enter the elements of the matrix:");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        int left = 0;
        int right = 0;
        for (int i = 0; i < n; i++) {
            left += arr[i][i];              
            right += arr[i][n - i - 1];
        }
        System.out.println("Left Diagonal Sum: " + left);
        System.out.println("Right Diagonal Sum: " + right);
        int max = Math.max(left, right);
        System.out.println("Maximum between both diagonals: " + max);

        sc.close();
    }
}
