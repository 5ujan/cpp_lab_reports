/*5.Write a base class that asks the user to enter a complex number and make a derived class that adds the complex number of its own with the base. Finally, make a third class that is a friend of derived and calculate the difference of the base complex number and its own complex number.

*/

#include <iostream>

using namespace std;

class AddComplex;
class SubtractComplex;

class BaseComplex{
    int real, imag;
    friend class AddComplex;
    friend class SubtractComplex;
    public:
        BaseComplex (){
            cout<<"Enter real part: ";
            cin>>real;
            cout<<"Enter imaginary part: ";
            cin>>imag;
        }
        BaseComplex(int a, int b):real(a), imag(b){
        }
        inline int returnReal(){return real;}
        inline int returnImag(){return imag;}

};

class AddComplex: public BaseComplex{
    // int real, imag;
    public:
        AddComplex():BaseComplex(){};
        AddComplex(int a, int b):BaseComplex(a, b){};

        BaseComplex addWith(BaseComplex a){
            int r= this->real+ a.real;
            int i= this->imag+ a.imag;

            BaseComplex t(r,i);
            return t;
            
        }
};
class SubtractComplex: public BaseComplex{
    // int real, imag;
    public:
        SubtractComplex():BaseComplex(){};
        SubtractComplex(int a, int b):BaseComplex(a, b){};

        BaseComplex subtractFrom(BaseComplex a){
            int r=  a.real-this->real;
            int i=  a.imag-this->imag;

            BaseComplex t(r,i);
            return t;
            
        }
};

int main(){
    char d;
    BaseComplex b;
    AddComplex a(2,3);
    SubtractComplex s(5,6);

    BaseComplex sum= a.addWith(b);
    BaseComplex diff= s.subtractFrom(b);

    d=diff.returnImag()<0?'\0':'+';

    cout<<"Sum: "<<sum.returnReal()<<"+"<<sum.returnImag()<<"i"<<endl;
    cout<<"Diff: "<<diff.returnReal()<<d<<diff.returnImag()<<"i"<<endl;


    return 0;
}