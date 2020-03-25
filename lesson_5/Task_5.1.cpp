#include<iostream>
using namespace std;

void mass(int array[],int size, int num)
{
	for (int put; put < size; put++)
	{
		cout << array[put] * num;
	}
}

int main()
{
	int size_array, input, multiplication;

	cout << "Enter the size array: ";
	cin >> size_array;
	int mul[size_array];
	for (input = 0; input < size_array; input++)
	{
		cout << "Enter number: ";
		cin >> mul[input];
	}
	cout << "\nEnter the number you want to multiply by an array: ";
	cin >> multiplication;
	cout << "\n";
	mass(size_array, multiplication, mul);
}