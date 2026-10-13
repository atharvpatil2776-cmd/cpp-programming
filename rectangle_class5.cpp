#include <iostream>
using namespace std;

class Rectangle
{
    float length, width;

public:

    Rectangle()
    {
        length = 10;
        width = 20;
        cout << "Default constructor called." << endl;
    }

    
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
        cout << "Parameterized constructor called." << endl;
    }

    
    float area()
    {
        return length * width;
    }

    
    float perimeter()
    {
        return 2 * (length + width);
    }

    
    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }

    
    ~Rectangle()
    {
        cout << "Destructor called." << endl;
    }
};

int main()
{
    Rectangle r1;
    cout << "\nRectangle 1:" << endl;
    r1.display();

    cout << "\nRectangle 2:" << endl;
    Rectangle r2(10, 5);
    r2.display();

    return 0;
}