/*2.Assume that you want to check whether the number is prime or not. Write a program that asks for numbers repeatedly. When it finishes checking a number the program asks if the user wants to do another calculation. The response can be 'y' or 'n'. Don't forget to use the object-oriented concept.
 */

#include <iostream>
using namespace std;

class Prime
{
    int number, i;

public:
    Prime(int num)
    {
        number = num;
    }
    void checkPrime()
    {
        char response;
        if (number % 2 == 0)
        {
            cout << number << " is not prime. Would you like to continue? ";
        }
        else
        {
            for (i = 3; i < (float)number / 2; i++)
            {
                if (number % i == 0)
                {
                    cout << number << " is not prime. Would you like to continue? ";
                    break;
                }
                else
                {
                    cout << number << " is prime. Would you like to continue? ";
                    break;
                }
            }
        }
        cin >> response;
        if (response == 'y')
        {
            cout << "Enter a number to check: ";
            cin >> number;
            checkPrime();
        }
        else
            return;
    }
};

int main()
{
    int n;
    cout << "Enter a number to check: ";
    cin >> n;
    Prime p(n);
    p.checkPrime();
    return 0;
}