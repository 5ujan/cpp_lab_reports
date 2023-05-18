/*6.
    Write a program that displays the current monthly salary of chief executive officer, information officer, and system analyst, programmer that has been increased by 9, 10, 12, and 12 percentages respectively in year 2010. Let us assume that the salaries in year 2009 are
    Chief executive officer Rs. 35000/m
    Information officer Rs. 25000/m
    System analyst Rs. 24000/m
    Programmer Rs. 18000/m
    Make a function that takes two arguments; one salary and the other increment. Use proper default argument.
*/
#include <iostream>
using namespace std;

int newSalary(int salary, int increment){
    return salary*(1+0.01*increment);
}
int main(){
    int salary;
    cout<<"Enter your salary: Rs ";
    cin>>salary;
    if(salary==35000){
        salary= newSalary(salary, 9);
    }
    if(salary==25000){
        salary= newSalary(salary, 10);
    }
    if(salary==24000){
        salary= newSalary(salary, 12);
    }
    if(salary==18000){
        salary= newSalary(salary, 12);
    }
    cout<<"Congratulations! Your new salary is: Rs "<<salary<<endl;
    return 0;

}