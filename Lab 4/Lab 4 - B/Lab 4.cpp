#include <iostream>

using namespace std;

int main()
{

    // TASK BBBBBBBBBBBBBBBBBBBBBBB
    int worker1 = 1;
    int worker2 = 0;
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cout << (j + worker2) * worker1 << "\t";
        }
        cout << "\n";
        worker1 += 1;
        if (i % 3 == 0)
        {
            cout << "******  ******* ******" << endl;
            worker2 += 1;
            worker1 = 1;
        }
    }

    cout << endl;



    return 0;
}