#include<iostream>
using namespace std;
int main()
{
	int salary;
	cout << "Enter your salary: ";
	cin >> salary;
	if (salary > 999)
	{
		if (salary > 999999)
		{
			cout << "Ti milioner";
		}
		if (salary < 1000000)
		{
			cout << "Horosho";
		}
	}
	if (salary < 1000)
	{
		cout << "Rabotai bolshe";
	}
	cout << "... no ti molodec";
}