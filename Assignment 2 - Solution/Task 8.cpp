#include <iostream>

using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter Number of Rows : ";
    cin >> rows;
    cols = rows;

    if (rows > 0)
    {
        for (int i = 0; i < rows; i++)
        {
            if (i != 0)
            {
                for (int j = i; j >= 1; j--)
                {
                    cout << j << " \t ";
                }
            }

            for (int j = 0; j < cols; j++)
            {
                cout << j << " \t ";
            }

            cols--;
            cout << "\n";
        }
    }
    else
    {
        cout << "Negative or Zero is NOT Allowed.";
    }

    return 0;
}
