#include <iostream>
using namespace std;
class Employee
{
private:
    int employeeID;
    string name;
    float salary;
public:
    void accept()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void display()
    {
        cout << "\nEmployee Details\n";
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    Employee e;
    e.accept();
    e.display();
    return 0;
}
