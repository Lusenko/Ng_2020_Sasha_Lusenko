#include<iostream>
#include<cmath>
using namespace std;

int Enter_number()
{
	cout << "Enter the first number: ";
	int value;
	cin >> value;
	return value;
}
int getNum()
{
	cout << "Enter the second number: ";
	int sec;
	cin >> sec;
	return sec;
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
	int power = 1;
	int result = number_1;

	while (power < number_2)
	{
		result *= number_1;
		power++;
	}
	return result;
}
int main()
{
	while (1 > 0)
	{
		int sum = 0;		
		cout << "1(+) 2(-) 3(*) 4(/) 5(sqrt) 6(pow): ";		
		cin >> sum;
		switch (sum)
		{
			case 1: cout << "Result: " << getSum(Enter_number(),getNum()) << "\n"; break;
			case 2: cout << "Result: " << getRes(Enter_number(), getNum()) << "\n"; break;
			case 3: cout << "Result: " << getMul(Enter_number(), getNum()) << "\n"; break;
			case 4: cout << "Result: " << getDiv(Enter_number(), getNum()) << "\n"; break;
			case 5: cout << "Result: " << getSqrt(Enter_number()) << "\n"; break;
			case 6: cout << "Result: " << getPower(Enter_number(), getNum()) << "\n"; break;
			default:
				cout << "Error!!!";
				break;
		}
		cout << endl;
	}	
}