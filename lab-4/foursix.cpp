/*6.
    Create a class with a data member to hold a "serial number" for each object created from the class. That is, the first object created will be numbered 1, the second 2, and so on by using the basic concept of static data members. Use static member function if it is useful in the program. Otherwise, make a separate program that demonstrates the use of static member function.

*/

#include <iostream>

using namespace std;

class ObjectGenerator
{
    static int serialNumber;
    int value, itemNumber;

public:
    ObjectGenerator(int num)
    {
        value = num;
        increment();
        itemNumber = serialNumber;
    }
    void static increment()
    {
        ++serialNumber;
    }
    void print()
    {
        cout << "The item no is :" << itemNumber << " and its value is: " << value << endl;
    }
};
int ObjectGenerator::serialNumber = 0;
int main()
{
    ObjectGenerator a(5), b(19), c(742);
    a.print();
    b.print();
    c.print();
    return 0;
}