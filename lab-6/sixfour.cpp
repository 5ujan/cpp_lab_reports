/*4.
Write three derived classes inheriting functionality of base class person (should have a member function that asks to enter name and age) and with added unique features of student, and employee, and functionality to assign, change and delete records of student and employee. And make one member function for printing the address of the objects of classes (base and derived) using this pointer. Create two objects of the base class and derived classes each and print the addresses of individual objects. Using a calculator, calculate the address space occupied by each object and verify this with address spaces printed by the program.*/

#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    string name;
    int age;

public:
    void get()
    {
        cout << "Enter your name: " << endl;
        cin >> name;
        cout << "Enter your age: " << endl;
        cin >> age;
    }
};
class Student : public Person
{
    string roll;

public:
    Student();
    Student(string r) : roll(r)
    {
        Person::get();
    };
};
class Employee : public Person
{
    string empNo;
    int salary;

public:
    Employee();
    Employee(string e, int sal) : empNo(e), salary(sal) {}
};
int main()
{
    Employee e;
    return 0;
}