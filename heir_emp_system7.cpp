#include <iostream>
using namespace std;

// Base Class
class Employee
{
protected:
    int employeeID;
    string employeeName;
    string department;

public:
    void getEmployeeDetails()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Department: ";
        cin >> department;
    }

    void displayEmployeeDetails()
    {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Department: " << department << endl;
    }
};

// Derived Class 1
class TeachingStaff : public Employee
{
private:
    string subject;
    string qualification;

public:
    void getTeachingDetails()
    {
        getEmployeeDetails();

        cout << "Enter Subject: ";
        cin >> subject;

        cout << "Enter Qualification: ";
        cin >> qualification;
    }

    void displayTeachingDetails()
    {
        displayEmployeeDetails();

        cout << "Subject: " << subject << endl;
        cout << "Qualification: " << qualification << endl;
    }
};

// Derived Class 2
class NonTeachingStaff : public Employee
{
private:
    string designation;
    int workingHours;

public:
    void getNonTeachingDetails()
    {
        getEmployeeDetails();

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Working Hours: ";
        cin >> workingHours;
    }

    void displayNonTeachingDetails()
    {
        displayEmployeeDetails();

        cout << "Designation: " << designation << endl;
        cout << "Working Hours: " << workingHours << " hours" << endl;
    }
};

int main()
{
    TeachingStaff teacher;
    NonTeachingStaff staff;

    cout << "----- Enter Teaching Staff Details -----" << endl;
    teacher.getTeachingDetails();

    cout << "\n----- Teaching Staff Details -----" << endl;
    teacher.displayTeachingDetails();

    cout << "\n----- Enter Non-Teaching Staff Details -----" << endl;
    staff.getNonTeachingDetails();

    cout << "\n----- Non-Teaching Staff Details -----" << endl;
    staff.displayNonTeachingDetails();

    return 0;
}