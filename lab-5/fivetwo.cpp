//2. Write a class to store x, y, and z coordinates of a point in three-dimensional space. Overload addition and subtraction operators for addition and subtraction of two coordinate objects. Implement the operator functions as non-member functions (friend operator functions).

#include <iostream>
using namespace std;

class Coordinates{
    int x, y, z;
    public:
    Coordinates(int a, int b, int c):x(a), y(b), z(c){};
     Coordinates operator+(const Coordinates& other){
    
        int newX= x+other.x;
        int newY= y+other.y;
        int newZ= z+other.z;
        Coordinates temp(newX, newY, newZ);
        return temp;
    }
     Coordinates operator-(const Coordinates& other){
        
        int newX= x-other.x;
        int newY= y-other.y;
        int newZ= z-other.z;
        Coordinates temp(newX, newY, newZ);
        return temp;
    }
    inline int getX(){return x;}
    inline int getY(){return y;}
    inline int getZ(){return z;}

};

int main(){
    Coordinates a(1,2,3);
    Coordinates b(4,5,6);
    Coordinates sum= a+b ;
    Coordinates diff= a-b;
    cout << "sum :" << sum.getX() << ',' << sum.getY() << ',' << sum.getZ() << endl;
    cout << "diff :" << diff.getX() << ',' << diff.getY() << ',' << diff.getZ() << endl;
    return 0;
}