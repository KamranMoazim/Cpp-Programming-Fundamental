#include <iostream>

using namespace std;

int main()
{
    int number, forComparison, factorial = 1, sum = 0;

    cout << "Enter Number : ";
    cin >> number;
    forComparison = number;

    if (number >= 0)
    {
        while (number != 0) {
            for (int i = (number % 10); i >= 1; i--)
            {
                factorial *= i;
            }
            sum += factorial;
            factorial = 1;
            number = number / 10;
        }
        if (sum == forComparison)
        {
            cout << "Your entered Number is Strong Number.";
        }
        else
        {
            cout << "Your entered Number is NOT Strong Number.";
        }
    }
    else
    {
        cout << "Negative is not Allowed.";
    }

    return 0;
}
