#include <iostream>
using namespace std;

// Base class for employee information
class Employee
{
protected:
    int empId;
    string name;

public:
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Employee Name: ";
        cin >> name;
    }
};

// Base class for project information
class Project
{
protected:
    int projectId;
    string projectName;

public:
    void getProject()
    {
        cout << "Enter Project ID: ";
        cin >> projectId;

        cout << "Enter Project Name: ";
        cin >> projectName;
    }
};

// Derived class using multiple inheritance
class EmployeeProject : public Employee, public Project
{
public:
    void display()
    {
        cout << "\n--- Employee Project Details ---" << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Project ID: " << projectId << endl;
        cout << "Project Name: " << projectName << endl;
    }
};

int main()
{
    EmployeeProject e;

    e.getEmployee();
    e.getProject();

    e.display();

    return 0;
}
