//1.
/*
Write a program to create a class shape with functions to find the area of the shapes and display the names of the shapes and other essential components of the class. Create derived classes circle, rectangle, and trapezoid each having overriding functions area() and display(). Write a suitable program to illustrate virtual functions and virtual destructors.*/

#include <iostream>
#include <cmath>

using namespace std;

class Shape{
    public:
        virtual void display(){};
        virtual void area(){};
         Shape(){};
        virtual ~Shape(){
            cout<<"Virtual Destructor called"<<endl;
        };
};  

class Circle: public Shape{
    int radius;
    public:
        Circle(int r=0):radius(r){};
        void display(){
            cout<<"Hello, I am a circle."<<endl;
        }
        void area(){
            cout<<"And my area is "<<radius*3.14f*radius<<endl;
        }
        ~Circle(){
            cout<<"circle destroyed"<<endl;
        }
};
class Rectangle:  public Shape{
    int length, breadth;
    public:
        Rectangle(int l=0, int b=0):length(l), breadth(b){};
        void display(){
            cout<<"Hello, I am a Rectangle."<<endl;
        }
        void area(){
            cout<<"And my area is "<<length*breadth<<endl;
        }
        ~Rectangle(){
            cout<<"Rectangle destroyed"<<endl;
        }
};
class Trapezoid: public Shape{
    int lenOne, lenTwo, height;
    public:
        Trapezoid(int l1=0, int l2=0, int h=0):lenOne(l1), lenTwo(l2), height(h){};
        void display(){
            cout<<"Hello, I am a Trapezoid."<<endl;
        }
        void area(){
            
            cout<<"And my area is "<< 0.5f* (lenOne+lenTwo)*height <<endl;
        }
        ~Trapezoid(){
            cout<<"Trapezoid Destroyed"<<endl;
        }
};

int main(){
    Trapezoid t(1, 2,3);
    Rectangle r(1, 2);
    Circle c(5);

    Shape *s[3];
    s[0]=&t;
    s[1]=&r;
    s[2]=&c;

for(int i=0; i<3;i++){

    s[i]->display();
    s[i]->area();
}
   

    // Shape *sptr= new Trapezoid;
    // delete sptr;
    return 0;
}