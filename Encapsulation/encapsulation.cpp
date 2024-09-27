#include <iostream>
using namespace std;

class BankAccount {
  private:
    string account_holder;
    int account_number;
    double balance;

  public:
    // Constructor to initialize the account
    BankAccount(string name, int acc_num, double initial_balance) {
        account_holder = name;
        account_number = acc_num;
        balance = initial_balance;
    }

    // Getter method to access the balance (read-only)
    double getBalance() const {
        return balance;
    }

    // Setter method to update the balance (controlled access)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Setter method for withdrawal (with validation)
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }

    // Method to display account info
    void displayAccountInfo() const {
        cout << "Account Holder: " << account_holder << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount account("John Doe", 12345, 5000.00);

    // Accessing data through public methods
    account.displayAccountInfo();
    account.deposit(1000); // Depositing amount
    account.withdraw(500); // Withdrawing amount
    account.displayAccountInfo(); // Updated info

    return 0;
}
