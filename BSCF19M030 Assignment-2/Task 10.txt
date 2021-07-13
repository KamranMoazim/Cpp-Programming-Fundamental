#include <iostream>

using namespace std;

int main()
{
    int rows, location = 0;

    cout << "Enter Number of Rows : ";
    cin >> rows;

    if (rows > 0)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < rows; j++)
            {
                if (location == 0)
                {
                    if (j == 0)
                    {
                        cout << "black-";
                    }
                    else if (j == rows - 1) {
                        cout << "-black";
                    }
                    else
                    {
                        cout << "-black-";
                    }
                    location = 1;
                }
                else
                {
                    cout << "white";
                    location = 0;
                }
            }
            cout << "\n";
        }
    }
    else
    {
        cout << "Negative or Zero is NOT Allowed.";
    }



    return 0;
}

