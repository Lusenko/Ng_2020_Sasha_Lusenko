#include <iostream>

using namespace std;

int main()
{
    int num[5], row = 0, index = 0, max = 0, cou = 0;

    while (index < 5)
    {
        cout << "Zvezdochek " << index + 1 << " -om stolbike: ";
        cin >> num[index];
        index++;
        if (max < num[cou])
        {
            max = num[cou];
        }
        cou++;
    }
    cou = 0;
    while (cou < max)
    {
        row = 0;
        while (row < 5)
        {
            if (cou < num[row])
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
            row++;            
        }
        cout << "\n";
        cou++;
    }
    cout << "\n";
}