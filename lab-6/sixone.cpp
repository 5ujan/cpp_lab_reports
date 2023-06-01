// Write a program that can convert the Distance (meter, centimeter) to meters measurement in float and vice versa. Make a class distance with two data members, meter and centimeter. You can add function members as per your requirement.

#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

class Distance{
    int meter, centimeter;
    float meters;
    public:
        Distance(int m, int cm):meter(m), centimeter(cm){};
        Distance(float f):meters(f){};
        inline int getMeter(){return meter;}
        inline int getCMeter(){return centimeter;}
        float onlyMeters(){
            return meter+ centimeter*0.01;
        }
        void convertToInt(){
            meter = floor(meters);
            cout<<"meter"<<meter<<endl;
            centimeter= round((meters-meter)*100);
             
        }
};

int main(){
    Distance d(2,4), e(3.14);
    e.convertToInt();
    cout<<"2 meters, 4 centimeters in meters only is "<<setprecision(3)<<d.onlyMeters()<<endl;
    cout<<"3.14 meters in meters and centimeters is "<<e.getMeter()<<" meters "<<e.getCMeter()<<" centimeters"<<endl;
    return 0;
}