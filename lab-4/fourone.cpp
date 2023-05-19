//1. Write a program that has a class to represent time. The class should have constructors to initialize data members hour, minute, and second to 0 and to initialize them to values passed as arguments. The class should have a member function to add time objects and return the result as a time object. There should be functions to display time in 12-hour and 24-hour format.z

#include <iostream>
#include <iomanip>

using namespace std;

class Time{
        int hour;
        int min;
        int sec;    
    public:
        Time(int hh=0, int mm=0, int ss=0){
            hour= hh;
            min= mm;
            sec= ss;
        }
        Time addTime(const Time t){
            Time sum;
            sum.hour= t.hour + hour;
            sum.min= t.min + min;
            sum.sec= t.sec + sec;

            if(sum.sec>=60) 
            {
                sum.sec= sum.sec%60;
                ++sum.min;
            }
            if(sum.min>=60) 
            {
                sum.min= sum.hour%60;
                ++sum.hour;
            }
            return sum;
        }
        void display(int hourFormat){
            if(hourFormat==12)
                cout<<"The time in 12 hour format is :  "<<setw(2) <<setfill('0')<<hour%12<<":"<<min<<":"<<sec<<endl;
            else if (hourFormat==24)
                cout<<"The time in 24 hour format is :  "<<setw(2) <<setfill('0')<<hour%24<<":"<<min<<":"<<sec<<endl;
        }
};

int main(){
    int a, b;
    Time t1(10,2,3), t2(10, 50, 35);
    Time tsum= t1.addTime(t2);

    tsum.display(12);
    tsum.display(24);


    return 0;
}