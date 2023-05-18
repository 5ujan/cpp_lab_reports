/*3. Create a class called carpark that has int data member for car id, int data member for charge/hour, and float data member for the parked time. Make functions to set data members and show the charges and parked hours of the corresponding car id. Make functions for setting and showing the data members. Member function should be called from other functions.
 */

#include <iostream>

using namespace std;

class Carpark
{
private:
    int id;
    int rate;
    float parkedTime;

public:
    void setId(int a)
    {
        id = a;
    }
    void setRate(int b)
    {
        rate = b;
    }
    void setTime(float c)
    {
        parkedTime = c;
    }
    void showHours()
    {
        cout << "You parked for " << parkedTime << " hours" << endl;
    }
    void showRate()
    {
        cout << "The rate of parking is Rs" << rate << "/hr" << endl;
    }
    void showCharges()
    {
        float cost = rate * parkedTime;
        cout << "The total cost is Rs" << cost << endl;
    }
};

int main()
{
    int rate, id;
    float hours;
    cout << "Enter id: ";
    cin >> id;
    cout << "Enter rate: ";
    cin >> rate;
    cout << "Enter parked hours: ";
    cin >> hours;

    class Carpark c;
    c.setId(id);
    c.setRate(rate);
    c.setTime(hours);
    c.showHours();
    c.showRate();
    c.showCharges();
    return 0;
}