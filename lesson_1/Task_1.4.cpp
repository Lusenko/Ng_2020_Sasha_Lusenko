#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << "Enter the third number: ";
	cin >> c;
	if (c == 1)
	{
		cout << "result: " << a + b;
	}
	if (c == 2)
	{
		cout << "result: " << a - b;
	}
	if (c == 3)
	{
		cout << "result: " << a * b;
	}
	if (c == 4)
	{
		cout << "result: " << a / b;
	}
	else
	{
		cout << "you entered an invalid number";
	}
}