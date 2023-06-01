// 4. Write a class Date that overloads prefix and postfix operators to increase the Date object by one day, while causing appropriate increments to the month and year (use the appropriate condition for leap year). The prefix and postfix operators in the Date class should behave exactly like the built-in increment operators.

#include <iostream>
using namespace std;

class Date{
    int dd, mm, yy;
    public:
        Date(int d, int m, int y):dd(d),mm(m), yy(y){};
        inline int getD(){return dd;}
        inline int getM(){return mm;}
        inline int getY(){return yy;}

        Date operator++(){
            increaseDate();
            return *this;
        }
        Date operator++(int){
            increaseDate();
            return *this;
        }
       bool isLeapYear(int a){
        return a%400==0||a%4==0&&a%100!=0?true:false;
       }
        void increaseDate(){
            dd++;
            if(dd==29){
            if(mm==2&&!isLeapYear(yy)){
                mm=3;
                dd=1;
            }}
            if (mm==2&&dd==30&&isLeapYear(yy)){
                dd=1;
                mm=3;
            }
            if((mm==4||mm==6||mm==9||mm==11)&&dd==31){
                dd=1;
                mm++;
            }
            if (mm==13){
                mm=1;
                yy++;
            }
        
}

};

int main(){
    Date a(29,2,2016);
    a++;
    cout<<"Date tomorrow: "<<a.getD()<<"/"<< a.getM()<<"/"<<a.getY()<<endl;
    return 0;
}