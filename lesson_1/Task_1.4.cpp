#include<iostream>
using namespace std;
int main()
{
	int number1, number2, number3;
	cout << "\t\t\t\t\t****calculator***\n";
	cout << "Enter first number: ";
	cin >> number1;
	cout << "Enter second number: ";
	cin >> number2;
	cout << "Enter the third number: ";
	cin >> number3;
	if (number3 == 1)
	{
		cout << number1 + number2;
	}
	if (number3 == 2)
	{
		cout << number1 - number2;
	}
	if (number3 == 3)
	{
		cout << number1 * number2;
	}
	if (number3 == 4)
	{
		cout << number1 / number2;
	}
	else
	{
		cout << "you entered an invalid number";
	}
}