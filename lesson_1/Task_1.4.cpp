#include <iostream>

using namespace std;

int main()
{
    int num[5], row = 0, i = 0, max = 0, cou = 0;
    while (i < 5)
    {
        cout << "Zvezdochek " << i + 1 << " -om stolbike: ";
        cin >> num[i];
        i++;
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
        cout << endl;
        cou++;
    }
    cout << "\n";
}