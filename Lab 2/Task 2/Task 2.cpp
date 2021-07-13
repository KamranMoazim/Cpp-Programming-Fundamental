#include <iostream>

// KAMRAN MOAZIM
// BCSF19M030

using namespace std;

int main()
{
    char a = 'a';

    cout << static_cast<int>(a) << endl;

    a = 'b';
    cout << int(a) << endl;
    a = 'c';
    cout << static_cast<int>(a) << endl;
    a = 'd';
    cout << int(a) << endl;
    a = 'e';
    cout << static_cast<int>(a) << endl;
    a = 'f';
    cout << int(a) << endl;
    a = 'g';
    cout << static_cast<int>(a) << endl;

}