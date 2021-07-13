#include <iostream>

// KAMRAN MOAZIM
// BCSF19M030

using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter number 1 : " << endl;
    cin >> n1;
    cout << "Enter number 2 : " << endl;
    cin >> n2;

    if ((n1 % n2 == 0)) {
        cout << n1 << " is a multiplier of " << n2;
    }
    else {
        cout << n1 << " is not a multiplier of " << n2;
    }

}