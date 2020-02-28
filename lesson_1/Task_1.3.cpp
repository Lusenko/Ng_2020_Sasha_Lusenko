#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout << "Enter the salary of the first worker: ";
	cin >> a;
	cout << "Enter the salary of the second worker: ";
	cin >> b;
	cout << "Enter the salary of the third worker: ";
	cin >> c;
    if (a > b and b > c and a > c)
    {
        cout << a - c;
    }
    if (a > c and c > b and a > b)
    {
        cout <<a - b;
    }
    if(a > c and c > b and a > b)
    {
        cout <<b - a;
    }
    if (b > a and a > c and b > c)
    {
        cout <<b - c;
    }
    if (c > a and a > b and c > b)
    {
        cout << c - b;
    }
    if (c > b and b > a and c > a)
    {
        cout << c - a;
    }
}