#include <iostream>

using namespace std;

int main()
{
    char alphaDigit = 65;   // A=65  Z=90
    int rows, incrementar = 6;

    cout << "Enter Number of Rows : ";
    cin >> rows;

    if (rows > 0)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < rows - i; j++)
            {
                if (alphaDigit >= 65 && alphaDigit <= 90)
                {
                    if (incrementar == 0)
                    {
                        incrementar = 6;
                    }
                    cout << alphaDigit << " ";
                    alphaDigit += incrementar--;
                }
                else
                {
                    alphaDigit -= 26;
                    cout << alphaDigit << " ";
                    alphaDigit += incrementar--;
                }
            }
            alphaDigit = 65;
            incrementar = 6;
            cout << "\n";
        }
    }
    else
    {
        cout << "Negative or zero is not Allowed.";
    }

    return 0;
}
