#include<iostream>
using namespace std;
void showBalance(double balance);
double deposit();
double withdraw(double balance);
int main(){
    double balance = 169;  
    int choice = 0;
    while (choice != 4) {
        cout << "Welcome to the Banking System" << endl;
        cout << "1. Show Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                cout << "Exiting the system. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }


return 0;
}
void showBalance(double balance) {
    cout << "Your current balance is: $" << balance << endl;
}
double deposit() {
    double amount;
    cout << "Enter the amount to deposit: $";
    cin >> amount;
    if (amount < 0) {
        cout << "Invalid amount. Deposit must be positive." << endl;
        return 0;
    }
    cout << "Deposited: $" << amount << endl;
    return amount;
}
double
    withdraw(double balance) {
        double amount;
        cout << "Enter the amount to withdraw: $";
        cin >> amount;
        if (amount < 0) {
            cout << "Invalid amount. Withdrawal must be positive." << endl;
            return balance;
        }
        if (amount > balance) {
            cout << "Insufficient funds. Your current balance is: $" << balance << endl;
            return balance;
        }
        balance -= amount;
        cout << "Withdrew: $" << amount << endl;
        return balance;
    }