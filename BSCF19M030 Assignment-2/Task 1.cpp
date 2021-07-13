#include <iostream>

using namespace std;

int main()
{
    // ********************************* TASK 1 ********************************* 
    // 1    2    4    7     11      16      22 ....
    // 0    1    2    3     4       5       6  ....
    // 1+0  1+1  2+2  4+3   7+4     11+5    16+6           
    int number, prevNumber = 1;
    long int sum = 0;

    cout << "Enter Number of Terms : ";
    cin >> number;
    if (number > 0)
    {
        for (int i = 0; i < number; i++)
        {
            prevNumber = (prevNumber + i);
            sum += (prevNumber);
        }
        cout << "Sum of your Entered Numbers is : " << sum;
    }
    else
    {
        cout << "Sorry Negative Numbers or 0 is not Accepted.\n";
    }


    return 0;
}