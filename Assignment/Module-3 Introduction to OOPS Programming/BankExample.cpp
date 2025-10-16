//2. Class for Bank Account
//o Create a class BankAccount with data members like balance and member functions
//like deposit and withdraw. Implement encapsulation by keeping the data members
//private.
//o Objective: Understand encapsulation in classes.
#include <iostream>
using namespace std;

class BankAccount {
	private:
    	double balance;

	public:
    	BankAccount(double initialBalance) {
        	if (initialBalance >= 0)
            	balance = initialBalance;
        	else {
            	balance = 0;
            	cout << "Invalid initial balance. Setting balance to 0.\n";
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } 
		else {
            cout << "Deposit amount must be positive!\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } 
		else if (amount > balance) {
            cout << "Insufficient balance!\n";
        } 
		else {
            cout << "Invalid withdrawal amount!\n";
        }
    }

    void showBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(1000.0);

    account.showBalance();

    account.deposit(500.0);
    account.withdraw(200.0);
    account.withdraw(2000.0);

    account.showBalance();

    return 0;
}

