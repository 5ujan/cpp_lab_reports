/*3.
    Create a class called Musicians to contain three methods string(), wind(), and perc(). Each of these methods should initialize a string array to contain the following instruments
-  veena, guitar, sitar, sarod and mandolin under string()
-  flute, clarinet saxophone, nadhaswaram, and piccolo under wind()
-  tabla, mridangam, bangos, drums and tambour under perc()
It should also display the contents of the arrays that are initialized. Create a derived class called TypeIns to contain a method called get() and show(). The get() method must display a  menu as follows
Type of instruments to be displayed
a.  String instruments
b.  Wind instruments
c.  Percussion instruments
The show() method should display the relevant detail according to our choice. The base class variables must be accessible only to their derived classes.*/

#include <iostream>
#include <cstring>

using namespace std;

class TypeIns;

class Musicians
{
    string win[30];
    string str[30];
    string percussion[30];
    int i = 0, j = 0, k = 0;
    string s[5] = {"veena", "guitar", "sitar", "sarod", "mandolin"};
    string w[5] = {"flute", "clarinet", "saxophone", "nadhaswaram", "picolo"};
    string p[5] = {"tabla", "mridangam", "bangos", "drums", "tambour"};

    friend class TypeIns;

public:
    void st()
    {
        for (string temp : s)
        {
            str[i] = temp;
            i++;
        }
    }
    void wind()
    {
        for (string temp : w)
        {
            win[j] = temp;
            j++;
        }
    }
    void perc()
    {
        for (string temp : p)
        {
            percussion[k] = temp;
            k++;
        }
    }
};

class TypeIns : public Musicians
{
    char choice;
    int z;
public:
    void get()
    {
    
        cout << "Type of instruments to be displayed" << endl
             << "a.String instruments" << endl
             << "b.Wind instruments" << endl
             << "c.Percussion instruments " << endl;
        cin>>choice;
    }
    void show(){
        if(choice=='a'){
            cout<<"String Instruments: [";
            for( z=0; z<i;z++){
             cout<<str[z]<<", ";
            }
            cout<<"]";
        }
        if(choice=='b'){
            cout<<"Wind Instruments: [";
            for(z=0; z<j; z++){
             cout<<win[z]<<", ";
            }
            cout<<"]";
        }
        if(choice=='c'){
            cout<<"Percussion Instruments: [";
            for(z=0;z<k; z++){
             cout<<percussion[z]<<", ";
            }
            cout<<"]";
        }
        
    }
};

int main()
{
    TypeIns t;
    t.wind();
    t.st();
    t.perc();

    
    t.get();
    t.show();
    return 0;
}