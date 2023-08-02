/*4.Create a polymorphic class Vehicle and create other derived classes Bus, Car, and Bike from Vehicle. Illustrate RTTI by the use of dynamic_cast and typeid operators in this program.
 */

#include <iostream>
using namespace std;

class Vehicle{
    public:
       virtual void display(){};
};
class Bus: public Vehicle{
    public :
        void display(){
            cout<<"I am a Bus";
        }
};
class Car: public Vehicle{
    public :
        void display(){
            cout<<"I am a Car";
        }
};
class Bike: public Vehicle{
    public :
        void display(){
            cout<<"I am a Bike";
        }
};


int main(){
    Vehicle *vbus= new Bus(), *vbike = new Bike(), *vcar = new Car(); 
    Bus *b= dynamic_cast<Bus*>(vbus);
    Bike *bi= dynamic_cast<Bike*>(vbike);
    Car *c= dynamic_cast<Car*>(vcar);

    if(typeid(*b)==typeid(Bus)&&typeid(*bi)==typeid(Bike)&&typeid(*c)==typeid(Car))cout<<"Dynamic cast successful"<<endl;
    else cout<<"Dynamic cast unsuccessful"<<endl;
    return 0;
}