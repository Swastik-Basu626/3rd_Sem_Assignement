package Banking;

public class SavingsAccount extends BankAccount {
    private double interestRate = 0.04; 

    public SavingsAccount(String accountHolderName, double balance, double minBalance) {
        super(accountHolderName, balance, minBalance);
    }

    @Override
    public double calculateInterest(int years) {
        return balance * interestRate * years;
    }
}
