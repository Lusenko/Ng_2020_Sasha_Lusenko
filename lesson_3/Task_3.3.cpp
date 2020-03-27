#include<iostream>

using namespace std;

int main()
{
    int num[20], index = 0, space = 0, iter = 0, maxi = 0;

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

    while (iter < index)
    {
        for (space = 0; space < (maxi - num[iter]) / 2; space++)
        {
            cout << " ";
        }

        for (space = 0; space < num[iter]; space++)
        {
            cout << "*";
        }
        cout << endl;
        iter++;
    }
}
