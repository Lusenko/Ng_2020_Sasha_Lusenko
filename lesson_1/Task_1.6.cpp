#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Vvedite 1 chislo: ";
    cin >> a;
    cout << "Vvedite 2 chislo: ";
    cin >> b;
    cout << "Vvedite 3 chislo: ";
    cin >> c;
    if (a * b == c or a * c == b or c * b == a)
    {
        cout << "yes";
    }
    if (a + b == c or a + c == b or c + b == a)
    {
        cout << "yes";
    }
    if (a - b == c or a - c == b or c - b == a)
    {
        cout << "yes";
    }
    if (a / b == c or a / c == b or c / b == a)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}
