/*2. Write a program to create a user-defined manipulator that will format the output by setting the width, precision, and fill character at the same time by passing arguments.
 */

#include <iostream>
#include <iomanip>
using namespace std;

class Manip{
    public:
    int width, precision;
    char fill;
    Manip(int w, int p, char f):width(w), precision(p), fill(f){};
    friend ostream &operator <<(ostream &os, Manip &m);
};

ostream& operator <<(ostream &os, Manip &m){
    os<<setfill(m.fill)<<setw(m.width)<<setprecision(m.precision)<<endl;
    os<< flush;
    return os;
}


int main(){
    Manip m(10, 5, '^');
    cout<<m<<3.141592<<endl;
    
    return 0;
}