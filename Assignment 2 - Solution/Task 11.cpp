#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string firstName, middleName, lastName;

    cout << "Enter Your First Name : ";
    cin >> firstName;
    cout << "Enter Your Middle Name : ";
    cin >> middleName;
    cout << "Enter Your Last Name : ";
    cin >> lastName;

    cout << firstName << endl;
    cout << setw(firstName.length() + middleName.length() - 1) << middleName << endl;
    cout << setw(firstName.length() + middleName.length() + lastName.length() - 2) << lastName << endl;

    return 0;
}
