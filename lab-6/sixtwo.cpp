// Write two classes to store distances in meter - centimeter and feet - inch systems respectively.Write conversions functions so that the program can convert objects of both types.

#include <iostream>
#include <cmath>
using namespace std;

class Metric;
class FeetInch
{
    int feet;
    float inch;

public:
    FeetInch(int f, float i) : feet(f), inch(i){};
    inline int returnFeet() { return feet; }
    inline float returnInch() { return inch; }

    Metric convertToMetric();
};

class Metric
{
    int m;
    float cm, totCm;

public:
    Metric(int met, float cmet) : m(met), cm(cmet)
    {
    }
    inline int returnM() { return m; }
    inline float returnCM() { return cm; }

    FeetInch convertToFeetInch();
};

Metric FeetInch::convertToMetric()
{
    float totInch = this->returnFeet() * 12 + this->returnInch();
    float totCm = totInch * 2.54;
    int m = floor(totCm / 100);
    float cm = (totCm - m * 100);
    Metric s(m, cm);
    return s;
}
FeetInch Metric::convertToFeetInch()
{
    float totCm = this->returnM() * 100 + this->returnCM();
    float totInch = totCm / 2.54;
    int feet = floor(totInch / 12);
    float inch = (totInch - feet * 12);
    FeetInch f(feet, inch);
    return f;
}

int main()
{
    Metric a(2, 54);
    FeetInch b(5, 9);
    Metric c = b.convertToMetric();
    FeetInch d = a.convertToFeetInch();

    cout << a.returnM() << " m " << a.returnCM() << " cm is " << d.returnFeet() << " feet " << d.returnInch() << " inches" << endl;
    cout << b.returnFeet() << " feet " << b.returnInch() << " inches is " << c.returnM() << " m " << c.returnCM() << " cms" << endl;

    return 0;
}