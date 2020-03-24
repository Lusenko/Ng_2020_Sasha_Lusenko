#include<iostream>

using namespace std;

int main()
{
    int num[20], index = 0, space = 0, i = 0, maxi = 0;

    while (index < 20)
    {
        cout << "Enter a number " << index + 1 << " column: ";
        cin >> num[index];
        if (num[index] == 0)
            break;
        if (num[index] > maxi)
            maxi = num[index];
        index++;
    }

    cout << endl;

    while (i < index)
    {
        for (space = 0; space < (maxi - num[i]) / 2; space++)
        {
            cout << " ";
        }

        for (space = 0; space < num[i]; space++)
        {
            cout << "*";
        }
        cout << endl;
        i++;
    }
}
