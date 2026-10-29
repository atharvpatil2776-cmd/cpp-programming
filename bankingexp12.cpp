#include <iostream>
using namespace std;

// Base class
class Account {
protected:
    int accNo;
    string name;
    float balance;

public:
    // Constructor
    Account(int a, string n, float b) {
        accNo = a;
        name = n;
        balance = b;
        cout << "Account created!" << endl;
    }

    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully." << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }

    virtual void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    virtual void statement() {
        cout << "\nAccount Number: " << accNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: Rs. " << balance << endl;
    }

    virtual ~Account() {
        cout << "Account closed." << endl;
    }
};

// Derived class 1
class SavingsAccount : public Account {
public:
    SavingsAccount(int a, string n, float b)
        : Account(a, n, b) {}

    void statement() override {
        cout << "\n--- Savings Account ---" << endl;
        Account::statement();
    }

    ~SavingsAccount() {
        cout << "Savings account destroyed." << endl;
    }
};

// Derived class 2
class CheckingAccount : public Account {
public:
    CheckingAccount(int a, string n, float b)
        : Account(a, n, b) {}

    void statement() override {
        cout << "\n--- Checking Account ---" << endl;
        Account::statement();
    }

    ~CheckingAccount() {
        cout << "Checking account destroyed." << endl;
    }
};

int main() {
    SavingsAccount s(101, "Rahul", 5000);
    s.deposit(1000);
    s.withdraw(500);
    s.statement();

    CheckingAccount c(102, "Priya", 3000);
    c.deposit(500);
    c.withdraw(1000);
    c.statement();

    return 0;
}