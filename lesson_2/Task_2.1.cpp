#include<iostream>
using namespace std;
int main()
{
	int i=0,star;
	cout << "Enter quantity star: ";
	cin >> star;
	while (i < star)
	{
		cout << i << " = *" << endl;
		i++;
	}
}