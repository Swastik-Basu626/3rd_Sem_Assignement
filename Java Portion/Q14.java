import java.util.*;

public class Q14 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter total marks: ");
        int marks = sc.nextInt();

        String grade;

        if (marks >= 95 && marks <= 100) {
            grade = "O";
        } else if (marks >= 85 && marks <= 94) {
            grade = "A+";
        } else if (marks >= 75 && marks <= 84) {
            grade = "A";
        } else if (marks >= 60 && marks <= 74) {
            grade = "B";
        } else if (marks >= 50 && marks <= 59) {
            grade = "C";
        } else if (marks >= 40 && marks <= 49) {
            grade = "D";
        } else if (marks < 40 && marks >= 0) {
            grade = "F";
        } else {
            grade = "Invalid Marks! (Enter between 0-100)";
        }

        System.out.println("Grade: " + grade);
        sc.close();
    }
}