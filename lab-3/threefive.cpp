/*5.Assume that an object represents an employee report that contains information like employee id, total bonus, total overtime in a particular year. Use an array of objects to represent n employees' reports. Write a program that displays the report. Use setpara() member function to set report attributes by passing the arguments and member function displayreport() to show the report according to the parameter passed. Display the report in the following format.
An employee with ... ... ... has received Rs ... ... ...as a bonus

and

had worked ... ... ... hours as overtime in the year ... ... ...
*/

#include <iostream>

using namespace std;

class Employee
{
    int id, totalBonus, year;
    float totalOvertime;

public:
    void setPara(int i, int tb, int yr, float th)
    {
        id = i;
        totalBonus = tb;
        year = yr;
        totalOvertime = th;
    }
    bool displayReport(int j)
    {

        if (j == id)
        {
            cout << "The employee with id " << id << " has worked " << totalOvertime << " hours overtime and has received a bonus of Rs. " << totalBonus << " for the year " << year << endl;
            return 1;
        }
        else
            return 0;
    }
};

int main()
{
    int num, i, eid;
    int id, totalBonus, year;
    float hours;
    cout << "Enter the number of employees: ";
    cin >> num;
    Employee employees[num];
    for (i = 0; i < num; i++)
    {
        cout << "Enter employee id: ";
        cin >> id;
        cout << "Enter employee bonus: ";
        cin >> totalBonus;
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter employee hours: ";
        cin >> hours;
        employees[i].setPara(id, totalBonus, year, hours);
    }

    cout << "Write the employee id to get details: ";
    cin >> eid;
    for (Employee emp : employees)
    {
        if (emp.displayReport(eid) == 1)
        {
            break;
        }
    }
    cout << "No employee with id " << eid << endl;

    return 0;
}
