#include<iostream>
using namespace std;
int main()
{
	int star;
	cout << "Enter kol star in kv: ";
	cin >> star;

	for (int columns = 0; columns < star ; columns++)
	{
		for (int rows = 0; rows < star; rows++)
		{
			cout <<"*";
			
		}
		cout << endl;
		
	}
	
}