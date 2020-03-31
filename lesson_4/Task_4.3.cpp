#include<iostream>
using namespace std;
int main()
{
	char array[100];
	int smo, big, index = 0;
	cout << "Enter string: ";
	cin.getline(array, 100);

	while (array[index] != 0)
	{
		if (array[index] >= 'a' && array[index] <= 'z')
			array[index] = array[index] - 32;
		index++;
	}
	index = 0;
	cout << endl;
	while (array[index] != 0)
	{
		cout << array[index];
		index++;
	}
}