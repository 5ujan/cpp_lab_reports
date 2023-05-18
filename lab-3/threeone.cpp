/*1.
Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale and vice versa using the basic concept of class and object. Make separate classes for Celsius and Fahrenheit which will have the private members that hold the temperature value and make conversion functions in each class for conversion from one to another. For example, you need to have a function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value.
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Celcius{
    private:
        float celcius;
    public:
        Celcius(float value){
            celcius= value;
        }
        inline float returnTemp(){
            return celcius;
        }
        float toFahrenheit(){
            return celcius*9/5+32;
        }
};
class Fahrenheit{
    private:
        float fahrenheit;
    public:
        Fahrenheit(float value){
            fahrenheit= value;
        }
        float toFahrenheit(){
            return (fahrenheit-32)*5/9;
        }
        inline float returnTemp(){
            return fahrenheit;
        }
};

int main(){
    Celcius c(37.1);
    Fahrenheit f(92.6);
    cout<<"Temperature in Celcius: "<<c.returnTemp()<<"C and its value in fahrenheit: "<<setprecision(4)<<c.toFahrenheit()<<"F"<<endl;
    cout<<"Temperature in Fahrenheit: "<<f.returnTemp()<<"F and its value in Celcius: "<<setprecision(4)<<f.toFahrenheit()<<"C"<<endl;

    return 0;
}