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
int Sum(int number_1)
{
	int number_2;
	cout << "Enter the second number: ";
	cin >> number_2;
	return number_1 + number_2;
}
int Res(int number_1)
{	
	int number_2;
	cout << "Enter the second number: ";
	cin >> number_2;
	return number_1 - number_2;
}
int Mul(int number_1)
{	
	int number_2;
	cout << "Enter the second number: ";
	cin >> number_2;
	return number_1 * number_2;
}
int Div(int number_1)
{	
	int number_2;
	cout << "Enter the second number: ";
	cin >> number_2;
	return number_1 / number_2;
}
int Sqrt(int number_1)
{
	return sqrt(number_1);
}
int Power(int number_1)
{
	int power = 1;
	int number_2;
	int result = number_1;
	cout << "Enter the second number: ";
	cin >> number_2;
    
	while (power < number_2)
	{
		result *= number_1;
		power++;
	}
	return result;
}

int main()
{
	int sum = 0;
	int value1 = Enter_number();
	cout << "1(+) 2(-) 3(*) 4(/) 5(sqrt) 6(pow): ";	
	cin >> sum;
	switch (sum)
	{
		case 1: cout << "Result: " << Sum(value1) <<"\n"; break;
		case 2: cout << "Result: " << Res(value1) << "\n"; break;
		case 3: cout << "Result: " << Mul(value1) << "\n"; break;
		case 4: cout << "Result: " << Div(value1) << "\n"; break;
		case 5: cout << "Result: " << Sqrt(value1) << "\n"; break;
		case 6: cout << "Result: " << Power(value1) << "\n"; break;
		default:
			cout << "Error!!!";
			break;			
	}
}