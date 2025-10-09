//Task: Simple Banking System 
#include <iostream>
#include <cmath>
using namespace std;

// Function declaration
void deposit(double &balance);
void withdraw(double &balance);
void checkBalance(double balance);

int main() {
    double balance = 500.0;
    int choice;

    do {
        cout << "\n*=*=* BANK'S SERVICES MENU *=*=*\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                deposit(balance);
                break;
            case 2:
                withdraw(balance);
                break;
            case 3:
                checkBalance(balance);
                break;
            case 4:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

// Function definition
void deposit(double &balance) {
    double amount;
    cout << "Enter deposit amount: $";
    cin >> amount;

    if (amount > 0) {
        balance += amount;
        cout << "Deposited successfully.\n";
    } else {
        cout << "Invalid amount. Try again.\n";
    }
}

void withdraw(double &balance) {
    double amount;
    cout << "Enter withdrawal amount: $";
    cin >> amount;

    if (amount <= 0) {
        cout << "Invalid amount.\n";
    } else if (amount > balance) {
        cout << "Insufficient balance.\n";
    } else {
        balance -= amount;
        cout << "Withdrawal successful.\n";
    }
}

void checkBalance(double balance) {
    cout << "Your current balance is: $" << balance << endl;
}