#include <iostream>

using namespace std;

int main()
{
    // Simple As given
    int rows = 5, cols = 9;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= (cols); j++)
        {
            if (j % 2 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << j;
            }
        }
        cols -= 2;
        cout << "\n";
    }

    cout << "\n";

    // Depends on User INPUT
    rows, cols;

    cout << "Enter Number of Rows : ";
    cin >> rows;

    

    if (rows > 0)
    {
        cols = (rows * 2) - 1;

        for (int i = 1; i <= rows; i++)
        {
            for (int j = 1; j <= (cols); j++)
            {
                if (j % 2 == 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << j;
                }
                
            }
            cols -= 2;
            cout << "\n";
        }
    }
    else
    {
        cout << "Negative or Zero is NOT Allowed.";
    }



    return 0;
}
