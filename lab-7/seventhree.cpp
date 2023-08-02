/*3.
Write a program with an abstract class Student and create derive classes Engineering, Medicine and Science from base class Student. Create the objects of the derived classes and process them and access them using an array of pointers of type base class Student.
*/
#include <iostream>
using namespace std;

class Student{
    public:
        virtual void  displayMajor(){};
};
class Engineering: public Student{
    public:
        void displayMajor(){
            cout<<"My major is Engineering"<<endl;
        }
};
class Medicine: public Student{
    public: 
        void displayMajor(){
            cout<<"My major is Medicine"<<endl;
        }
};
class Science: public Student{
    public: 
        void displayMajor(){
            cout<<"My major is Science"<<endl;
        }
};

int main(){
    int i;
    Student *students[3];
    students[0] = new Engineering();
    students[1] = new Medicine();
    students[2] = new Science();

    for(i=0;i<3;i++){
        students[i]->displayMajor();
    }

    return 0;
}