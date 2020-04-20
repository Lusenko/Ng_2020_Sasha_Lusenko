#include<iostream>
#include<cmath>
using namespace std;

int Enter_number(int num)
{
	cout << "Enter the " << num << " number: ";
	int value;
	cin >> value;
	return value;
}
int getSum(int number_1, int number_2)
{
	return number_1 + number_2;
}
int getRes(int number_1, int number_2)
{
	return number_1 - number_2;
}
int getMul(int number_1, int number_2)
{
	return number_1 * number_2;
}
int getDiv(int number_1, int number_2)
{
	return number_1 / number_2;
}
double getSqrt(double number_1)
{
	return sqrt(number_1);
}
int getPower(int number_1, int number_2)
{

	int result = number_2;
	for (int index = 1; index < number_1; index++)
	{
		result *= number_2;
	}
	return result;
}
int getAction()
{
	cout << "Select action: 1(+) 2(-) 3(*) 4(/) 5(sqrt) 6(pow): ";
	int action;
	cin >> action;
	return action;
}
void processSwitch(int action, int value1, int value2)
{
	switch (action)
	{
	case 1: cout << "Result: " << getSum(value1, value2) << "\n\n"; break;
	case 2: cout << "Result: " << getRes(value1, value2) << "\n\n"; break;
	case 3: cout << "Result: " << getMul(value1, value2) << "\n\n"; break;
	case 4: cout << "Result: " << getDiv(value1, value2) << "\n\n"; break;
	case 5: cout << "Result: " << getSqrt(value1) << "\n\n"; break;
	case 6: cout << "Result: " << getPower(value1, value2) << "\n\n"; break;
	default: cout << "Error!!!"; break;
	}
}
int main()
{
	while (1)
	{
		int action = 0;
		int value1 = Enter_number(1);
		int value2 = Enter_number(2);
		processSwitch(getAction(), value1, value2);
	}	
}