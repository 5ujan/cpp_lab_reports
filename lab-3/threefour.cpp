/*4.
Write a program with classes to represent a circle, rectangle, and triangle. Each class should have data members to represent the actual objects and member functions to read and display objects, find perimeter and area of the objects, and other useful functions. Use the classes to create objects in your program.
*/
#include <iostream>
#include <iomanip>

using namespace std;

class Circle
{
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }
    void details()
    {
        cout << "The object is a circle with radius: " << radius << " units" << endl;
    }
    void area()
    {
        cout << "The Area of shape is : " << setprecision(5) << radius * radius * 3.1415 << " sq. units" << endl;
    }
    void perimeter()
    {
        cout << "The Perimeter of shape is : " << setprecision(5) << 2 * radius * 3.1415 << " units" << endl;
    }
};

class Rectangle
{
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }
    void details()
    {
        cout << "The object is a rectangle with length: " << length << " units and breadth: " << breadth << "units" << endl;
    }
    void area()
    {
        cout << "The Area of shape is : " << setprecision(5) << length * breadth << " sq. units" << endl;
    }
    void perimeter()
    {
        cout << "The Perimeter of shape is : " << setprecision(5) << 2 * (length + breadth) << " units" << endl;
    }
};

class Triangle
{
    float base, height;

public:
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }
    void details()
    {
        cout << "The object is a circle with base: " << base << " units and height: " << height << " units." << endl;
    }
    void area()
    {
        cout << "The Area of shape is : " << setprecision(5) << 0.5 * base * height << " sq. units" << endl;
    }
};

int main()
{
    Circle c(7);
    Triangle t(2, 5);
    Rectangle r(10, 8);

    c.details();
    c.perimeter();
    c.area();

    t.details();
    t.area();

    r.details();
    r.perimeter();
    r.area();

    return 0;
}