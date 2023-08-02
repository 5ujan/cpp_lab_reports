// 3. Write a program to overload stream operators to read a complex number and display the complex number in a+ib format.

#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:

    Complex(int r=0, int i=0):a(r), b(i){};
    friend istream& operator>>(istream &is, Complex &c);
    friend ostream& operator<<(ostream &os, Complex &c);
};

istream& operator>>(istream &is, Complex &c)
{   
    is>>c.a>>c.b;
    return is;
}
ostream& operator<<(ostream &os, Complex &c)
{   
    os<<c.a<<"+ "<<c.b<<"i"<<endl;
    os<<flush;
    return os;
}

int main()
{
    Complex c;
    cout<<"Enter your complex number"<<endl;
    cin>>c;
    cout<<"The complex number you entered is: "<<c<<endl;

    return 0;
}