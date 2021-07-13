#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
	int choice;
	int powerOfNumber, numberWhosePowerShouldCalculated, powerWorker, builtInFunctionPowerOutput = 0, userDefinedFunctionPowerOutput = 1;

	cout << "Enter 1 if you wants to generate a random number between 3 and 12 : \n";
	cout << "Enter 2 if you wants to find a square root of a number : \n";
	cout << "Enter 3 if you wants to use a trignometric number function (sin, cos, tan): \n";
	cout << "Enter 4 if you wants to find the power of a number : \n";
	cin >> choice;

	switch (choice)
	{
		case 1:
			cout << "The Random number between 3 and 12 is : " << rand() / 12;
			break;
		case 2:
			int numberForSqrt;
			cout << "Please Enter the Number for which you wants to calculate Square Root : \n";
			cin >> numberForSqrt;
			cout << "The Square Root of your Entered Number is : " << sqrt(numberForSqrt);
			break;
		case 3:
			int trigChoice;
			float valueForTrigFunc;
			cout << "Enter 1 if you wants to calculate sin : \n";
			cout << "Enter 2 if you wants to calculate cos : \n";
			cout << "Enter 3 if you wants to calculate tan : \n";
			cin >> trigChoice;
			cout << "Enter The Number for which Trignometric Function should Calculate Value : \n";
			cin >> valueForTrigFunc;
			if (trigChoice == 1){
				cout << "The Sin of " << valueForTrigFunc << " is " << sin(valueForTrigFunc);
			}
			else if (trigChoice == 2) {
				cout << "The Cos of " << valueForTrigFunc << " is " << cos(valueForTrigFunc);
			}
			else if (trigChoice == 3)
			{
				cout << "The Tan of " << valueForTrigFunc << " is " << tan(valueForTrigFunc);
			}
			else {
				cout << "You Entered Wrong Choice";
			}
			break;
		case 4:
			cout << "Enter the Number of which you wants to calculate Power : \n";
			cin >> numberWhosePowerShouldCalculated;
			cout << "Enter the Power which should be calculated for your Previously Entered Number : \n";
			cin >> powerOfNumber;
			builtInFunctionPowerOutput = pow(numberWhosePowerShouldCalculated, powerOfNumber);
			for (int i = 0; i < powerOfNumber; i++)
			{
				userDefinedFunctionPowerOutput *= (numberWhosePowerShouldCalculated);
			}
			if (userDefinedFunctionPowerOutput == builtInFunctionPowerOutput)
			{
				cout << "Both User Defined and Built in Function Results the Same. \n";
			}
			else
			{
				cout << "User Defined and Built in Function Results do not Match. \n";
			}
			cout << numberWhosePowerShouldCalculated <<" raised to power " << powerOfNumber << " is "<< userDefinedFunctionPowerOutput;
			break;
		default:
			cout << "You Entered wrong Input!";
			break;
	}

	return 0;
}

