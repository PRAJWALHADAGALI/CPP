#include <iostream>

using namespace std;

class employee
{
    char emp_name[30];
    int emp_id;
    float basic_salary, gross_salary, da, hra, da1, hra1;

public:
    void read_data()
    {
        cout << endl
             << "Enter the employee details";
        cout << endl
             << "Enter the employee name: ";
        cin >> emp_name;
        cout << endl
             << "Enter employee ID: ";
        cin >> emp_id;
    }
    void read_salary()
    {
        cout << endl
             << "enter basic salary: ";
        cin >> basic_salary;
        cout << endl
             << "Enter the DA: ";
        cin >> da;
        cout << endl
             << "Enter the hra: ";
        cin >> hra;
    }
    int cal_salary()
    {
        da1 = (basic_salary * da) / 100;
        hra1 = (basic_salary * hra) / 100;
        gross_salary = basic_salary + da1 + hra1;
        return gross_salary;
    }
    void display()
    {
        cout << endl
             << "Gross salary is " << gross_salary;
    }
};

int main()
{
    employee emp;
    int n;
    cout << endl
         << "Enter number of employees: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        emp.read_data();
        emp.read_salary();
        emp.cal_salary();
        emp.display();
    }
    return 0;
}