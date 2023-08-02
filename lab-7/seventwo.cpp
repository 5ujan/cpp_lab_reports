/*2.
Create a class Person and two derived classes Employee and Student, inherited from class Person. Now create a class Manager which is derived from two base classes Employee and Student. Show the use of the virtual base class.
*/
#include <iostream>
using namespace std;

class Person{
    string name;
    public:
        Person(const string &n):name(n){};
        virtual void display(){
            cout<<"Name: "<<name;
        }
};

class Employee: virtual public Person{
    int empId;
    public: 
        Employee(const string &name, const int &a): Person(name), empId(a){}
             void display() {
                Person::display();
                cout<<" Employee id: "<<empId<<endl;
            
        };

};
class Student: virtual public Person{
    int studentId;
    public:
        Student(const string &name, const int &a): Person(name), studentId(a){};
             void display() {
                Person::display() ;
                cout <<" Student Id: "<<studentId<<endl;
            }
        

};
class Manager: public Employee, public Student{
    public:
        Manager(const string &name, const int &e, const int &s): Person(name), Student(name, s), Employee(name, e){};
        void display () {
            Student::display();
            Employee::display();
            cout<<"Manager"<<endl;
        }

} ;


int main(){
    Manager m("Jacob", 2331, 95);
    m.display();

    return 0;
}