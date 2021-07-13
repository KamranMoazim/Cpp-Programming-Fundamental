#include <iostream>

using namespace std;

int main()
{


    // TASK AAAAAAAAAAAAAAAAA
    int worker = 1;
    int incrementBy = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << 1 + incrementBy << "\t";
            incrementBy += worker;
        }
        incrementBy = 0;
        worker += 1;
        cout << endl;
    }

    cout << endl;


    return 0;
}