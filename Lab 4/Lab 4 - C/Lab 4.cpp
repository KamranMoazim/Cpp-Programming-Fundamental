#include <iostream>

using namespace std;

int main()
{




    // TASK CCCCCCCCCCCCCCCCCCCCCCC
    int worker = 10;
    int printAble = 10;
    for (int i = 1; i <= 10; i++) {

        for (int j = 1; j <= worker - i; j++)
        {
            cout << "\t";
        }

        for (int k = 1; k <= i; k++)
        {
            if (printAble % 5 == 0)
            {
                cout << "\t*";
            }
            else
            {
                cout << "\t" << printAble;
            }
        }
        cout << endl;
        printAble -= 1;
    }




    return 0;
}