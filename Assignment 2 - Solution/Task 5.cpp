#include <iostream>

using namespace std;

int main()
{
    int number, forLater, reverseNumber = 0, remainder;

    cout << "Enter Number : ";
    cin >> number;
    forLater = number;

    if (number >= 0)
    {
        while (number != 0) {
            remainder = number % 10;
            reverseNumber = reverseNumber * 10 + remainder;
            number = number / 10;
        }

        if (forLater == reverseNumber)
        {
            cout << "Number is Palindrome.";
        }
        else
        {
            cout << "Number is NOT Palindrome.";
        }
    }
    else
    {
        cout << "Negative is NOT Allowed.";
    }



    return 0;
}
