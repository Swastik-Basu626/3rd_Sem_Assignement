package Banking;

public class FixedDepositAccount extends BankAccount {
    private double interestRate = 0.07; 

    public FixedDepositAccount(String accountHolderName, double balance, double minBalance) {
        super(accountHolderName, balance, minBalance);
    }

    @Override
    public double calculateInterest(int years) {
        return balance * interestRate * years;
    }
}
