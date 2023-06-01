#include <iostream>
using namespace std;

class BaseComplex
{
    int real, imag;
    friend class AddComplex;
    friend class SubtractComplex;

public:
    BaseComplex()
    {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    BaseComplex(int a, int b) : real(a), imag(b) {}

    int returnReal() { return real; }
    int returnImag() { return imag; }
};

class AddComplex : public BaseComplex
{
public:
    AddComplex() : BaseComplex() {}

    AddComplex(int a, int b) : BaseComplex(a, b) {}

    BaseComplex addWith(BaseComplex a)
    {
        int r = this->real + a.real;
        int i = this->imag + a.imag;
        BaseComplex t(r, i);
        return t;
    }
};

class SubtractComplex : public BaseComplex
{
public:
    SubtractComplex() : BaseComplex() {}

    SubtractComplex(int a, int b) : BaseComplex(a, b) {}

    BaseComplex subtractFrom(BaseComplex a)
    {
        int r = a.real - this->real;
        int i = a.imag - this->imag;
        BaseComplex t(r, i);
        return t;
    }
};

int main()
{
    BaseComplex b;
    AddComplex a(2, 3);
    SubtractComplex s(5, 6);

    BaseComplex sum = a.addWith(b);
    BaseComplex diff = s.subtractFrom(b);

    cout << "Sum: " << sum.returnReal() << "+" << sum.returnImag() << "i" << endl;
    cout << "Diff: " << diff.returnReal() << "+" << diff.returnImag() << "i" << endl;

    return 0;
}
