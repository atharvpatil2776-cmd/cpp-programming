#include <iostream> 
using namespace std;

class Employee {
    int id;
    string name;
    float salary;

public:

    Employee() {
        id = 0;
        name = "Unknown";
        salary = 0;
    }

    Employee(int i, string n, float s) {
        id = i;
        name = n;
        salary = s;
    }

    
    Employee(const Employee &e) {
        id = e.id;
        name = e.name;
        salary = e.salary;
    }

    void display() {
        cout << "ID: " << id
             << "\nName: " << name
             << "\nSalary: " << salary << "\n\n";
    }
};

int main() {
    Employee e1;(90, "Atharva" , 50000);                       
    Employee e2(99, "Advait", 50000); 
    Employee e3(e2);  

    e1.display();
    e2.display();
    e3.display();

    return 0;
}