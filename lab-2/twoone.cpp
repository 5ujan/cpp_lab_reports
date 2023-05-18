// 1. Write a program to set a structure to hold a date (mm,dd and yy), assign values to the members of the structure and print out the values in the format 11/28/2004 by function. Pass the structure to the function

#include <iostream>

using namespace std;
struct Date{
    int day;
    int month;
    int year;
}d;

void printer(struct Date a){
    cout<<"The date today is: "<<a.day<<"/"<<a.month<<"/"<<a.year<<endl; 
}

int main(){
    cout<<"Enter the date: "<<endl;
    cout<<"Enter day: ";
    cin>>d.day;
    cout<<"Enter month: ";
    cin>>d.month;
    cout<<"Enter year: ";
    cin>>d.year;
    printer(d);
    return 0;
}