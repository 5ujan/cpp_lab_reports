//4. Write a function that passes two temperatures by reference and sets the larger of the two numbers to a value entered by user by using return by reference.
#include <iostream>

using namespace std;

int*  myFunc(int *one, int *two){
    if(*one>*two){
        return one;
    }else{
        return two;
    }
}

int main(){
    int a , b, c, *ptrc;
    cout<<"Enter the two temperatures:";
    cin>>a>>b;
    cout<<"Enter the third temperature: ";
    cin>>c;

    ptrc= myFunc(&a, &b);
    *ptrc= c;
    cout<<"The final values are a: " <<a<<" b: "<<b<< " c: "<<c<<endl;
     
    return 0;

}