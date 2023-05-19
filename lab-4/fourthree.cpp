/*3.Write a class that can store Department ID and Department Name with constructors to initialize its members. Write destructor member in the same class and display the message "Object n goes out of the scope". Your program should be made such that it should show the order of constructor and destructor invocation.

*/
#include <iostream>
#include <cstring>

using namespace std;

class Department{
    char* name;
    int id;
    public:
        Department(const char* str, int num){
            char* temp= const_cast <char*>(str);
            name = new char[strlen(temp)+1];
            strcpy(name, temp);
            id= num;
            cout<<"Constructor invoked "<<endl;
        }
        void getDetails(){
            cout<<"The name of department is : "<<name<<" and its id is :"<<id<<endl;
        }
        ~Department(){
            delete[] name;
            cout<<"Destructor called "<<endl;
        }
};      
int main(){
    Department d("computer", 69);
    d.getDetails();
    return 0;
}