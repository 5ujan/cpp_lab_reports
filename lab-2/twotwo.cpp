// 2.Write a program using the function overloading that converts feet to inches. Use function with no argument, one argument and two arguments. Decide yourself the types of arguments. Use pass by reference in any one of the function above.

#include <iostream>

using namespace std;

//function with no argument
void convert(){
    cout<<"1 foot = 12 inches"<<endl;
}
//function with one argument
void convert(int ft){
    int in= ft*12;
    cout<<ft<<" feet = "<<in<<" inches"<<endl;
}
//function with two arguments using pass by reference
void convert (int *ft, int *in){
    int totalInches = *ft *12+ *in;
    cout<<*ft<<" feet and "<<*in<<" inches = "<<totalInches<<" inches"<<endl;
}

int main(){
    int f, i;
    convert();
    cout<<"Enter number of feet to convert: ";
    cin>>f;
    convert(f);
    cout<<"Enter number of feet and inches to convert: ";
    cin>>f>>i;
    convert(&f, &i);
    return 0;

}