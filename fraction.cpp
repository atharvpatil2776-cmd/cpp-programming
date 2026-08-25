#include <iostream>
using namespace std;

class Fraction
{
    int numerator, denominator;

public:
    void accept()
    {
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;
    }

    Fraction add(Fraction f)
    {
        Fraction r;
        r.numerator = numerator * f.denominator + f.numerator * denominator;
        r.denominator = denominator * f.denominator;
        return r;
    }

    Fraction subtract(Fraction f)
    {
        Fraction r;
        r.numerator = numerator * f.denominator - f.numerator * denominator;
        r.denominator = denominator * f.denominator;
        return r;
    }

    void display()
    {
        cout << numerator << "/" << denominator;
    }
};

int main()
{
    Fraction f1, f2, sum, sub;

    cout << "Enter First Fraction:"<<endl;
    f1.accept();

    cout << "Enter Second Fraction:"<<endl;
    f2.accept();

    sum = f1.add(f2);
    sub = f1.subtract(f2);

    cout << "Addition: ";
    sum.display();

    cout <<endl<< "Subtraction: ";
    sub.display();

    return 0;
}