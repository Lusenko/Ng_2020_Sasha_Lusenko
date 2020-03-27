#include<iostream>
using namespace std;
int main()
{
	char array[100];
	int smo, big, i = 0;
	cout << "Enter string: ";
	cin.getline(array, 100);

	while (array[i] != 0)
	{
		if (array[i] >= 'a' && array[i] <= 'z')
			array[i] = array[i] - 32;
		i++;
	}
	i = 0;
	cout << endl;
	while (array[i] != 0)
	{
		cout << array[i];
		i++;
	}
}