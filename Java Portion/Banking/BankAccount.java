package Banking;

public class BankAccount {
    protected String accountHolderName;
    protected double balance;
    protected double minBalance;

    public BankAccount(String accountHolderName, double balance, double minBalance) {
        this.accountHolderName = accountHolderName;
        this.balance = balance;
        this.minBalance = minBalance;
    }
    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println(amount + " credited successfully.");
        } else {
            System.out.println("Invalid deposit amount!");
        }
    }
    public void withdraw(double amount) {
        if (amount > 0 && (balance - amount) >= minBalance) {
            balance -= amount;
            System.out.println(amount + " debited successfully.");
        } else {
            System.out.println("Insufficient balance or invalid amount!");
        }
    }
    public double getBalance() {
        return balance;
    }
    public double calculateInterest(int years) {
        return 0.0;
    }
    public void displayAccountInfo() {
        System.out.println("\nAccount Holder: " + accountHolderName);
        System.out.println("Current Balance: " + balance);
        System.out.println("Minimum Balance: " + minBalance);
    }
}
