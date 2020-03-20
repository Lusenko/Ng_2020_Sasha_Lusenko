#include<iostream>
using namespace std;
int main()
{
	int number1, number2, sol;
	cout << "\t\t\t\t\t****calculator***\n";
	cout << "Enter first number: ";
	cin >> number1;
	cout << "Enter second number: ";
	cin >> number2;
	cout << "What would you choose (+), (-), (*), (/): ";
	cin >> sol;
	switch (sol)
	{
		case 1:
			cout << "Result: " << number1 + number2;
			break;
		case 2:
			cout << "Result: " << number1 - number2;
			break;
		case 3:
			cout << "Result: " << number1 * number2;
			break;
		case 4:
			cout << "Result: " << number1 / number2;
			break;
		default:
			cout << "Error!!!";
			break;
	}	
}