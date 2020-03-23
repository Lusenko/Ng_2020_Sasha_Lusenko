#include<iostream>
using namespace std;
int main()
{
	char array[100];
	int wor = 0, sym = 0;
	bool space = true;
	
	cout << "Enter string: ";
	cin.getline(array, 100);
	while (array[wor] != 0)
	{
		if (!(array[wor] >= 'a') && (array[wor] <= 'z') || (array[wor] >= 'A') && (array[wor] <= 'Z'))
		{
			space = true;
		}
		else if (space)
		{
			sym++;
			space = false;
		}
		wor++;		
	}			
	cout << "Words in string: " << sym << endl;
}