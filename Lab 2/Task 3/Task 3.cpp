#include <iostream>

// KAMRAN MOAZIM
// BCSF19M030

using namespace std;

int main()
{
    char a ;

    cout << "Enter the character : " << endl;
    cin >> a;

    if (a >= 65 && a <= 90) {  // isupper(a)
        cout << "Your Entered char is upper case.";
    }
    else if (a >= 97 && a <= 122) {  // islower(a)
        cout << "Your Entered char is lower case.";
    }
    else {
        cout << "Your Entered char is neither upper nor lower case.";
    }

}