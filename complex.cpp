#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void input()
    {
        cin >> a >> b;
    }

    void add(complex c, complex d)
    {
        cout << "Addition = "
             << a + c.a + d.a << " + "
             << b + c.b + d.b << "i" << endl;
    }

    void sub(complex c, complex d)
    {
        cout << "Subtraction = "
             << a - c.a - d.a << " + "
             << b - c.b - d.b << "i" << endl;
    }
};

int main()
{
    complex c1, c2, c3;

    cout << "Enter 1st complex no: ";
    c1.input();

    cout << "Enter 2nd complex no: ";
    c2.input();

    cout << "Enter 3rd complex no: ";
    c3.input();

    c1.add(c2, c3);
    c1.sub(c2, c3);

    return 0;
}