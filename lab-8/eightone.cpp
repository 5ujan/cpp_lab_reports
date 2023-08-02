// 1. Write a program to demonstrate the use of different ios flags and functions to format the output. Create a program to generate the bill invoice of a department store by using different formatting.

#include <iostream>
#include <iomanip>

using namespace std;

class Items{
    string name;
    float price;
    int qty;
    public:
        Items(string s, float p, int q):name(s), price(p), qty(q){};
        void display(){
            cout << setw(20) << setfill(' ') << left << name << setw(10) << left << qty << setw(10) << left << price << "$" << setprecision(3) << setw(10) << left << price * qty << endl;
        }
        float addwith(Items a){
            return price + a.price;
        }
};
int main(){
    Items i1("Item one", 2.99, 5), i2("Item two" , 3.99, 3); 

    cout<<"C++ Department store"<<endl;
    cout<<setw(45)<<setfill('-')<<"-"<<endl;
    cout << setw(20) << setfill(' ') << left << "Items" << setw(10) << left << "Quantity" << setw(10) << left << "Rate" << setw(10) << "Price" << endl;
    cout<<setw(45)<<setfill('-')<<"-"<<endl;
    i1.display();
    i2.display();
    cout<<setw(45)<<setfill('-')<<"-"<<endl;
    cout<<setw(40)<<setfill(' ')<<left<<"Total: "<<setprecision(3)<<"$"<<setw(10)<<left<<i1.addwith(i2)<<endl;
    cout<<setw(45)<<setfill('-')<<"-"<<endl;
    return 0;
}