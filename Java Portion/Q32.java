import Banking.BankAccount;
import Banking.SavingsAccount;
import Banking.FixedDepositAccount;

public class Q32 {
    public static void main(String[] args) {
        SavingsAccount savings = new SavingsAccount("Swastik Basu", 10000, 1000);
        FixedDepositAccount fd = new FixedDepositAccount("Swastik Basu", 50000, 0);

        System.out.println("=== Account Details Before Transactions ===");
        savings.displayAccountInfo();
        fd.displayAccountInfo();
        System.out.println("\n--- Performing Transactions on Savings Account ---");
        savings.deposit(5000);
        savings.withdraw(2000);
        savings.withdraw(30000); 
        double savingsInterest = savings.calculateInterest(5);
        double fdInterest = fd.calculateInterest(5);

        System.out.println("\n--- Interest After 5 Years ---");
        System.out.println("Savings Account Interest: " + savingsInterest);
        System.out.println("Fixed Deposit Account Interest: " + fdInterest);
        System.out.println("\n=== Final Account Details ===");
        savings.displayAccountInfo();
        fd.displayAccountInfo();
    }
}
