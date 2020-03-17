#include <iostream>

using namespace std;

int main()
{
    int cards[10], money = 0, num = 0, sum = 0;    
    for (int i = 0; i < 10; i++)
    {
        cards[i] = 0;
        cout << cards[i] << " ";       
    }
    cout << "\n";
        while (1 > 0)
        {
            cout << "Enter nomber cards: ";
            cin >> num;
            cout << "How much money you want to put: ";
            cin >> money;
            cards[num - 1] = cards[num - 1] + money;          
            for (int b = 0; b < 10; b++)
            {                             
                cout << cards[b] << " ";               
            }
            cout << "\n";
            sum = 0;
            for (int g = 0; g < 10; g++)
            {
                sum += cards[g];               
            } 
            cout << "Total sum of cards: " << sum;
            cout << "\n\n";
        }        
}
