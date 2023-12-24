#include <iostream>
#include <string>

using namespace std;

union Salary {
    float monthlySalary;
    float hourlyRate;
};

struct Employee
{
    string name;
    Salary salary;
    bool monthlyOrHourly; // true means Monthly and false means Hourly rate.
};

int main()
{
    Employee employee;

    employee.name = "John Doe";
    employee.monthlyOrHourly = true; // Monthly
    employee.salary.monthlySalary = 5000.0; // Monthly salary

    cout << "Employee Name: " << employee.name << endl;
    cout << "Payment Type: " << (employee.monthlyOrHourly ? "Monthly" : "Hourly") << endl; // This is the Ternary operator.

    if (employee.monthlyOrHourly) {
        cout << "Monthly Salary: $" << employee.salary.monthlySalary << endl;
    } else {
        cout << "Hourly Rate: $" << employee.salary.hourlyRate << " per hour" << endl;
    }

    return 0;
}
