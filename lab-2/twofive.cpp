// 5. Assume that employee will have to pay 10 percent income tax to the government. Ask user to enter the employee salary. Use inline function to display the net payment to the employee by the company.

#include <iostream>

using namespace std;

inline float calculate(int sal){
    return sal*0.1;
}

int main(){
    int sal;
    cout<<"Enter your salary: Rs ";
    cin>>sal;
    cout<<"The income tax for you is Rs "<<calculate(sal)<< endl;
    return 0;
}