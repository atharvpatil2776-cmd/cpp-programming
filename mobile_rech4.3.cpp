#include <iostream>
using namespace std;

class MobileRecharge
{
    string mobileNumber;
    string name;
    float balance;

public:

    void accept()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Mobile Number: ";
        cin >> mobileNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void recharge()
    {
        float amount;

        cout << "Enter recharge amount: ";
        cin >> amount;

        balance = balance + amount;

        cout << "Recharge successful!" << endl;
    }

    void deductBalance()
    {
        float amount;

        cout << "Enter amount to deduct: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Balance deducted successfully!" << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display()
    {
        cout << "\n--- Account Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Mobile Number: " << mobileNumber << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main()
{
    MobileRecharge m;

    m.accept();

    m.display();

    m.recharge();
    m.display();

    m.deductBalance();
    m.display();

    return 0;
}