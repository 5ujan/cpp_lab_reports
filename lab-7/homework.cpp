/*Write programs for following conversions. Write programs on paper, take photos of every page, create PDF and submit (turn in).
a) Conversion from Kg to pound system.
b) Conversion from Cartesian coordinate to the polar coordinate system.
c) Conversion from meter system to feet system.
d) Conversion from the 24-hour clock to 12 hour
e) Conversion from liter to gallons
f) Conversion from the pound/ounce to Kg/gm
g) Conversion from the meter/cm to feet/inches
*/
#include <iostream>
#include <cmath>
using namespace std;
//a
class Kilogram{
    float kg;
    public:
        Kilogram(float kk): kg(kk){};
        float returnPounds(){
            return kg * 2.20;
        }
};
//b
class Polar{
    float r, ang;
    public: 
    Polar(float rr, float angle):r{rr}, ang(angle){};
    void display(){
        cout<<"radius: "<<r<<"angle: "<<ang<<endl;
    }
};

class Cartesian{
    float x, y;
    public:
        Cartesian(float xx, float yy): x(xx), y(yy){};
        Polar convert(){
            float r = sqrt(x*x+y*y);
            float a = atan(y/x);
            return Polar(r,a);
        }
};
//c
class FeetInch{
    float feet, inch;
    public: 
    FeetInch(float ff, float ii):feet{ff}, inch(ii){};
    void display(){
        cout<<"feet: "<<feet<<" inch: "<<inch<<endl;
    }
};

class Metric{
    float x, y;
    public:
        Metric(float xx, float yy): x(xx), y(yy){};
        Polar convert(){
            float r = sqrt(x*x+y*y);
            float a = atan(y/x);
            return Polar(r,a);
        }
};