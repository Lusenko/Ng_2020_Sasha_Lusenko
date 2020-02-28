#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    if (a * b == c or a * c == b or c * b == a)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}