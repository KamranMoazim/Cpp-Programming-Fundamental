#include <iostream>

using namespace std;

int main()
{
    int number, forLater, binaryChecker = 1;
    long int multiplier = 1, binaryNumber = 0;
    bool yesSparseOne = false, yesSparseTwo = false;

    cout << "Enter Number : ";
    cin >> number;
    forLater = number;

    if (number > 0)
    {

        while (number != 0)
        {
            binaryNumber += (number % 2) * multiplier;
            number /= 2;
            multiplier *= 10;
        }
        cout << "Binary of your entered Number is : " << binaryNumber;

        number = forLater;

        while (number != 0)
        {
            binaryNumber = number % 2;
            number /= 2;

            if (yesSparseOne && binaryNumber == binaryChecker)
            {
                yesSparseTwo = true;
            }
            else
            {
                yesSparseTwo = false;
                yesSparseOne = false;
            }

            if (binaryNumber == binaryChecker)
            {
                yesSparseOne = true;
            }

            if (yesSparseOne && yesSparseTwo)
            {
                binaryChecker = 0;
                break;
            }
        }

        if (binaryChecker)
        {
            cout << "\nYour entered Number is Sparse";
        }
        else
        {
            cout << "\nYour entered Number is NOT Sparse\n";
            number = ++forLater, binaryChecker = 1, yesSparseOne = false, yesSparseTwo = false;

            do
            {
                while (number != 0)
                {
                    binaryNumber = number % 2;
                    number /= 2;

                    if (binaryNumber == binaryChecker && yesSparseOne)
                    {
                        yesSparseTwo = true;
                    }
                    else
                    {
                        yesSparseTwo = false;
                        yesSparseOne = false;
                    }

                    if (binaryNumber == binaryChecker)
                    {
                        yesSparseOne = true;
                    }

                    if (yesSparseOne && yesSparseTwo)
                    {
                        binaryChecker = 0;
                        break;
                        // NOT Sparse
                    }
                }
                if (binaryChecker == 0)
                {
                    number = ++forLater, binaryChecker = 1, yesSparseOne = false, yesSparseTwo = false;
                }
                else
                {
                    binaryChecker = 0;
                }
            } while (binaryChecker);

            cout << "Next Sparse Number is : " << forLater;
        }
    }
    else
    {
        cout << "Negative or zero is not Allowed.";
    }

    return 0;
}
