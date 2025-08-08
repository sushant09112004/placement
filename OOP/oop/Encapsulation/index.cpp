#include <iostream>
#include <string>

class BankAccount {
private:
    // Data members (attributes) - these are private, meaning
    // they can only be accessed directly from within the class.
    std::string accountNumber;
    double balance;

public:
    // Constructor to initialize the account
    BankAccount(std::string accNum, double initialBalance) {
        accountNumber = accNum;
        if (initialBalance >= 0) { // Basic validation
            balance = initialBalance;
        } else {
            balance = 0; // Default to 0 if initial balance is negative
            std::cout << "Initial balance cannot be negative. Setting to 0." << std::endl;
        }
    }

    // Public methods (behaviors/operations) - these are public,
    // meaning they can be accessed from outside the class.

    // Getter for balance (allows reading the balance)
    double getBalance() const {
        return balance;
    }

    // Setter/Mutator for depositing money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited " << amount << ". New balance: " << balance << std::endl;
        } else {
            std::cout << "Deposit amount must be positive." << std::endl;
        }
    }

    // Setter/Mutator for withdrawing money
    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            std::cout << "Withdrew " << amount << ". New balance: " << balance << std::endl;
        } else if (amount <= 0) {
            std::cout << "Withdrawal amount must be positive." << std::endl;
        } else {
            std::cout << "Insufficient balance." << std::endl;
        }
    }

    // Getter for account number
    std::string getAccountNumber() const {
        return accountNumber;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount myAccount("12345-67890", 1000.0);

    // Access data through public methods (encapsulation in action)
    std::cout << "Account Number: " << myAccount.getAccountNumber() << std::endl;
    std::cout << "Current Balance: " << myAccount.getBalance() << std::endl;

    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.withdraw(2000.0); // This will fail due to insufficient balance
    myAccount.deposit(-100.0);  // This will fail due to negative amount

    // You CANNOT directly access balance or accountNumber like this:
    // myAccount.balance = 5000.0; // ERROR: 'balance' is private
    // std::cout << myAccount.accountNumber; // ERROR: 'accountNumber' is private

    return 0;
}