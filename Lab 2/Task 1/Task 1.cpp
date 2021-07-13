#include <iostream>

// KAMRAN MOAZIM
// BCSF19M030

using namespace std;

int main()
{
    int a, b;
    cout << "Enter the value of a :"<<endl;
    cin >> a;
    cout << "Enter the value of b :"<<endl;
    cin >> b;

    cout << "Value of a is : " << a << endl;
    cout << "Size of a is : "<< sizeof(a) << endl;
    cout << "Address of a is : "<< &a << endl;
    cout << "Value of a is : " << b << endl;
    cout << "Size of a is : " << sizeof(b) << endl;
    cout << "Address of a is : " << &b << endl;

}