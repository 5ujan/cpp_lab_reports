/*5.     Write a program that illustrates the following relationship and comment on them.

i) const_object.non_const_mem_function

ii) const_object.const_mem_function

iii) non_const_object.non_const_mem_function

iv) non_const_object.const_mem_function*/

#include <iostream>

using namespace std;

class Myclass{
    const int num= 5;
    int value;
    public:
        Myclass(int num){
            value= num;
        }
        void constMemFunc() const{
            cout<<"Const member function can read value; value: "<<value<<" magnitude: "<<num<<endl;
            //it cannot modify value, for instance value=8 or num=8 would result in compilation error
        }
        void nonConstMemFunc(){
            cout<<"Non const member fuction can read value; value = "<<value<<endl;
            value=93;
            cout<<"And they can modify it as well, newValue = "<<value<<endl;
            //But trying to modify the value of const num, num=4 would result in compilation error
        }

};
int main(){
    const Myclass a(5);
    Myclass b(4);

    a.constMemFunc();
    b.constMemFunc();

    //a.nonConstMemFunc(); would result in compilation error because a is a constant object and the fucntion tries to modify its value
    b.nonConstMemFunc();


    return 0;
}
