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


// Task: Movie Booking

#include <iostream>
using namespace std;

// Function declaration
double calculateTotal(int tickets, double price);

int main() {
    int choice, tickets;
    double total;
    char again;

    do {
        cout << "\nMOVIE TICKET MENU\n";
        cout << "1. Movie A - $8\n";
        cout << "2. Movie B - $10\n";
        cout << "3. Movie C - $12\n";
        cout << "Enter your movie choice (1-3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter number of tickets for Movie A: ";
                cin >> tickets;
                total = calculateTotal(tickets, 8.0);
                cout << "Total cost: $" << total << endl;
                break;

            case 2:
                cout << "Enter number of tickets for Movie B: ";
                cin >> tickets;
                total = calculateTotal(tickets, 10.0);
                cout << "Total cost: $" << total << endl;
                break;

            case 3:
                cout << "Enter number of tickets for Movie C: ";
                cin >> tickets;
                total = calculateTotal(tickets, 12.0);
                cout << "Total cost: $" << total << endl;
                break;

            default:
                cout << "Invalid choice. Please select 1–3.\n";
        }

        cout << "\nWould you like to book another movie? (Y/N): ";
        cin >> again;

    } while (again == 'Y' || again == 'y');

    cout << "\nThanks for booking! Enjoy your movie\n";
    return 0;
}

// Function definition
double calculateTotal(int tickets, double price) {
    return tickets * price;
}
