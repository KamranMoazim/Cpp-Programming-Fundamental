#include <iostream>

using namespace std;

int main()
{
    int number, spaceHandler, middleSpaceHandler = 0;
    bool ok;

    cout << "Enter Number of Rows : ";
    cin >> number;
    spaceHandler = number - 1;

    if (number > 0)
    {
        for (int i = 0; i < number; i++)
        {
            for (int j = spaceHandler; j > 0; j--)
            {
                cout << " ";
            }
            for (int star = 0; star < 1; star++)
            {
                cout << "*";
            }

            if (i != 0)
            {
                for (int j = 1; j < (i + middleSpaceHandler); j++)
                {
                    cout << " ";
                }

                for (int star = 0; star < 1; star++)
                {
                    cout << "*";
                }
            }

            for (int j = spaceHandler; j > 0; j--)
            {
                cout << " ";
            }
            spaceHandler--;
            middleSpaceHandler++;
            cout << endl;
        }
    }
    else
    {
        cout << "Sorry Negative Numbers or 0 is not Accepted.\n";
    }

    return 0;
}
