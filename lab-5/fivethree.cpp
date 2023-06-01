// 3. Write a program to compare two objects of a class that contains an integer value as its data member. Make overloading functions to overload equality(==), less than(<), greater than(>), not equal (!=), greater than or equal to (>=), and less than or equal to(<=) operators using member operator functions.

#include <iostream>
using namespace std;

class Integer{
    int num;
    public:
        Integer(int a): num(a){};
        inline int getNum()const {return num;}

        bool operator==(const Integer& other)  {
            return (num==other.getNum());
        }

        bool operator<=(const Integer& other)  {
            return (num<=other.getNum());
        }

        bool operator>=(const Integer& other)  {
            return (num>=other.getNum());
        }

        bool operator<(const Integer& other)  {
            return (num<other.getNum());
        }

        bool operator>(const Integer& other)  {
            return (num>other.getNum());
        }

        bool operator!=(const Integer& other)  {
            return (num!=other.getNum());
        }
};

int main(){
        Integer a(5);
        Integer b(10);

        cout << "a == b: " << (a == b) << endl;
        cout << "a < b: " << (a < b) << endl;
        cout << "a > b: " << (a > b) << endl;
        cout << "a != b: " << (a != b) << endl;
        cout << "a >= b: " << (a >= b) << endl;
        cout << "a <= b: " << (a <= b) << endl;

        return 0;
}