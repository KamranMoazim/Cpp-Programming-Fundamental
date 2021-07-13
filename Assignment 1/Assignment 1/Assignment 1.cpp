#include <iostream>

using namespace std;

int main() {

    int Marks;
    char Grade;

    cout << "Enter Marks : \n";
    cin >> Marks;
    
    if (Marks >= 0 && Marks <= 100) {
        if (Marks >= 80) {
            Grade = 'A';
        }
        else if (Marks < 80 && Marks >= 60) {
            Grade = 'B';
        }
        else if (Marks < 60 && Marks >= 50) {
            Grade = 'C';
        }
        else if (Marks < 50 && Marks >= 45) {
            Grade = 'D';
        }
        else if (Marks < 45 && Marks >= 25) {
            Grade = 'E';
        }
        else if (Marks < 25 && Marks >= 0) {
            Grade = 'F';
        }
        cout << "Your Grade is : " << Grade;

    } else if (Marks < 0) {
        cout << "Negative Numbers are not Allowed.";
    } else {
        cout << "Marks Cannot be Greater Than 100.";
    }

    return 0;
}