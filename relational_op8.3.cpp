#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> value;
    }

    // Relational operator overloading using member function
    bool operator>(Number n)
    {
        return value > n.value;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Number n1, n2;

    cout << "Enter first number:" << endl;
    n1.getData();

    cout << "Enter second number:" << endl;
    n2.getData();

    // Calling overloaded relational operator
    if (n1 > n2)
        cout << "\nFirst number is greater than second number.";
    else
        cout << "\nFirst number is not greater than second number.";

    return 0;
}