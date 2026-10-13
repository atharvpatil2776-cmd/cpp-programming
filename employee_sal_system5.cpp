#include <iostream>
using namespace std;

class Employee
{
    int employeeID;
    string employeeName;
    float basicSalary;
    float HRA;
    float DA;

public:

    Employee(int id, string name, float basic, float hra, float da)
    {
        employeeID = id;
        employeeName = name;
        basicSalary = basic;
        HRA = hra;
        DA = da;
    }

    float grossSalary()
    {
        return basicSalary + HRA + DA;
    }

    
    void display()
    {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << HRA << endl;
        cout << "DA: " << DA << endl;
        cout << "Gross Salary: " << grossSalary() << endl;
    }

    
    ~Employee()
    {
        cout << "\nEmployee object destroyed." << endl;
    }
};

int main()
{
    Employee e(101, "Rahul", 25000, 5000, 3000);

    e.display();

    return 0;
}