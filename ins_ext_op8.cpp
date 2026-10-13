#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    float marks;

public:
    // Overloading extraction operator >>
    friend istream& operator>>(istream& in, Student& s)
    {
        cout << "Enter Student Name: ";
        in >> s.name;

        cout << "Enter Roll Number: ";
        in >> s.rollNo;

        cout << "Enter Marks: ";
        in >> s.marks;

        return in;
    }

    // Overloading insertion operator <<
    friend ostream& operator<<(ostream& out, Student& s)
    {
        out << "\nStudent Details:" << endl;
        out << "Name: " << s.name << endl;
        out << "Roll Number: " << s.rollNo << endl;
        out << "Marks: " << s.marks << endl;

        return out;
    }
};

int main()
{
    Student s;

    // Extraction operator
    cin >> s;

    // Insertion operator
    cout << s;

    return 0;
}