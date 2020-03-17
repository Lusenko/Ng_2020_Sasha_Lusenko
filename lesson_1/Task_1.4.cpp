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
	cout << "What will you choose (+), (-), (*), (/): ";
	cin >> sol;
	if (sol == 1)
	{
		cout << "Result: " << number1 + number2;
	}
	if (sol == 2)
	{
		cout << "Result: " << number1 - number2;
	}
	if (sol == 3)
	{
		cout << "Result: " << number1 * number2;
	}
	if (sol == 4)
	{
		cout << "Result: " << number1 / number2;
	}
	if (sol > 4)
	{
		cout << "Error!!!";
	}

}