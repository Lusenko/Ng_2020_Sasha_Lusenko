#include<iostream>
using namespace std;
int main()
{
	int num1, num2, sum;
	cout << "\t\t\t\t\t\tColculator\n";
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "What you want to do 1(+) 2(-) 3(*) 4(/): ";
	cin >> sum;

	switch (sum)
	{
		case 1: cout << "Result: " << num1 + num2; break;
		case 2: cout << "Result: " << num1 - num2; break;
		case 3: cout << "Result: " << num1 * num2; break;
		case 4: cout << "Result: " << num1 / num2; break;
		default:
			cout << "Error!!!";
			break;
	}
}