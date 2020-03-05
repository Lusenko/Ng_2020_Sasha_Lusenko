##include<iostream>
using namespace std;
int main()
{
	int i = 0, number;
	cout << "Enter number: ";
	cin >> number;
	while (i <= number)
	{
		cout << i;
		i++;
		cout << ",";
	}
	cout << i;
}