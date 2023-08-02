/*4.
Write a program that stores the information about students (name, student id, department, and address) in a structure and then transfers the information to a file in your directory. Finally, retrieve the information from your file and print it in the proper format on your output screen.
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

struct Student{
    string name, id, department;
    Student(){
        name= "Unknown";
        id= "Unknown";
        department = "Unknown";
    }
    Student(const string& n, const string& i, const string& d):name(n), id(i), department(d){};

static void writeToFile(Student sta[]){
    ofstream outFile("students.bin", ios::binary);
    if(outFile.is_open()){
        for(int i=0; i<3; i++)
        {
        outFile.write(reinterpret_cast<const char*>(&sta[i]), sizeof(Student));
            
        }
        
        outFile.close();
    }
    else{
        cout<<"error writing data to file"<<endl;
    }
    cout<<"Data successfully added to file"<<endl;
}
static void readFromFile(Student* sta){
    ifstream inFile("students.bin", ios::binary | ios::in);
    inFile.seekg(0);
   int i=0;
   while(!inFile.eof()){
    if(inFile.is_open()){
        inFile.read(reinterpret_cast<char*>(sta+i), sizeof(Student));
    }
    i++;
    }
    inFile.close();
}
};
int main(){
    Student stArr[3];
   stArr[0]= Student("Sujan", "078BCT093", "Computer");
   stArr[1]= Student("Yujal", "078BCT096", "Computer");
   stArr[2]= Student("Yugesh", "078BCT095", "Computer");
    Student retrievedStArr[3];
    //storing
    Student::writeToFile(stArr);
    //retrieving
    cout << "The names students are: " << endl
         << setw(20) << "Student |" << setw(20) << "Roll |" << setw(20) << "Department |" << endl;
    Student::readFromFile(retrievedStArr);
    for(Student s: retrievedStArr){
        cout << setw(20) << s.name << setw(20) << s.id << setw(20) << s.department << endl;
    }
    return 0;
}