#include<iostream>
using namespace std;
int main()
{
	char array[100];
	int wor = 0, len = 0, lon = 0, n = 0, dif = 0;

	cout << "Enter some words in string: ";
	cin.getline(array,100);

	while (array[wor] != 0)
	{
		if ((array[wor] >= 'a') && (array[wor] <= 'z') || (array[wor] >= 'A') && (array[wor] <= 'Z'))
			len++;
		else
		{
			if (len > lon)
			{
				lon = len;
				dif = wor - lon;
			}
			len = 0;
		}
		if (array[wor + 1] == 0)
		{
			if (len > lon && array[wor + 1] == 0)
			{
				lon = len;
				dif = wor - lon;
			}
			len = 0;
		}
		wor++;
	}
	cout << endl <<"The longest word is: ";
	for (wor = 0; wor <= lon; wor++)
	{
		cout << array[dif];
		dif++;
	}
	cout << endl;
}
