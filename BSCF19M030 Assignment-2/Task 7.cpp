#include <iostream>

using namespace std;

int main()
{
    int base, exponent, power = 1;

    cout << "Enter Base : ";
    cin >> base;
    cout << "Enter Exponent : ";
    cin >> exponent;

    if (base > 0 && exponent > 0)
    {
        // power = base * exponent;

        for (int i = 1; i <= exponent; i++)
        {
            power *= base;
        }
        cout << base << " raised to power " << exponent << " is : " << power;
    }
    else
    {
        cout << "Negative or Zero is NOT Allowed.";
    }



    return 0;
}
