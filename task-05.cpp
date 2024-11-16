#include <iostream>
using namespace std;

int main() {
    double balance = 0.0; 
    int choice;
    double amount;

    do {
       
        cout << "\n=== Simple Bank Transaction System ===" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                cout << "Enter the amount to deposit: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposited $" << amount << ". Your new balance is $" << balance << "." << endl;
                } else {
                    cout << "Invalid amount. Please enter a positive number." << endl;
                }
                break;
            case 2: 
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                if (amount > 0) {
                    if (amount <= balance) {
                        balance -= amount;
                        cout << "Withdrawn $" << amount << ". Your new balance is $" << balance << "." << endl;
                    } else {
                        cout << "Insufficient funds. Your current balance is $" << balance << "." << endl;
                    }
                } else {
                    cout << "Invalid amount. Please enter a positive number." << endl;
                }
                break;
            case 3: 
                cout << "Your current balance is $" << balance << "." << endl;
                break;
            case 4: 
                cout << "Thank you for using the Simple Bank Transaction System. Goodbye!" << endl;
                break;
            default: 
                cout << "Invalid choice. Please select an option from 1 to 4." << endl;
        }
    } while (choice != 4); 

    return 0;
}
