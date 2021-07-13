#include <iostream>

// KAMRAN MOAZIM
// BCSF19M030

using namespace std;

int main()
{
    int n1, n2, n3, n4, n5 ;

    cout << "Enter number 1 : " << endl;
    cin >> n1;
    cout << "Enter number 2 : " << endl;
    cin >> n2;
    cout << "Enter number 3 : " << endl;
    cin >> n3;
    cout << "Enter number 4 : " << endl;
    cin >> n4;
    cout << "Enter number 5 : " << endl;
    cin >> n5;

    if ((n1 > n2) && (n1 > n3) && (n1 > n4) && (n1 > n5)) {
        cout << "The largest Number in your Entered numbers is : " << n1;
    }
    else if ((n2 > n1) && (n2 > n3) && (n2 > n4) && (n2 > n5)) {
        cout << "The largest Number in your Entered numbers is : " << n2;
    }
    else if ((n3 > n2) && (n3 > n1) && (n3 > n4) && (n3 > n5)) {
        cout << "The largest Number in your Entered numbers is : " << n3;
    }
    else if ((n4 > n2) && (n4 > n3) && (n4 > n1) && (n4 > n5)) {
        cout << "The largest Number in your Entered numbers is : " << n4;
    }
    else {
        cout << "The largest Number in your Entered numbers is : " << n5;
    }

    cout << endl;

    if ((n1 < n2) && (n1 < n3) && (n1 < n4) && (n1 < n5)) {
        cout << "The smallest Number in your Entered numbers is : " << n1;
    }
    else if ((n2 < n1) && (n2 < n3) && (n2 < n4) && (n2 < n5)) {
        cout << "The smallest Number in your Entered numbers is : " << n2;
    }
    else if ((n3 < n2) && (n3 < n1) && (n3 < n4) && (n3 < n5)) {
        cout << "The smallest Number in your Entered numbers is : " << n3;
    }
    else if ((n4 < n2) && (n4 < n3) && (n4 < n1) && (n4 < n5)) {
        cout << "The smallest Number in your Entered numbers is : " << n4;
    }
    else {
        cout << "The smallest Number in your Entered numbers is : " << n5;
    }

}