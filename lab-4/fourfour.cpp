/*
4.Assume that one constructor initializes data member say num_vehicle, hour, and rate. There should be a 10% discount if num_vehicle exceeds 10. Display the total charge. Use two objects and show a bit-by-bit copy of one object to another (make your own copy constructor).
*/
#include <iostream>

using namespace std;

class Data{
    int hour, num_vehicle, rate;
    public:
        Data(int h, int n, int r){
            hour=h;
            num_vehicle=n;
            rate=r;
        }
        Data(const Data& a){
            hour= a.hour;
            num_vehicle= a.num_vehicle;
            rate= a.rate;
        }
        int calculatePrice(){
            int price= rate*hour*num_vehicle;
            if(num_vehicle>=10) price*=0.9;
            return price;
        }
        void displayPrice(){
            cout<<"The total cost is :Rs "<<calculatePrice()<<endl;
        }

};

int main(){
    Data a(10, 20, 30);
    a.displayPrice();

    Data b(a);
    b.displayPrice();
    return 0;
}