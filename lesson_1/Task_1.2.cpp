#include<iostream>
using namespace std;

int main()
{
	int n,m,k;
	cout << "Enter the number of cones : ";
	cin >> n;
	cout << "Enter the amount of peanuts: ";
	cin >> m;
	cout << "Enter the number of nuts she needs: ";
	cin >> k;
	if (n * m <= k)
	{
		cout << "yes";
	}
	else 
	{
		cout << "no";
	}
}