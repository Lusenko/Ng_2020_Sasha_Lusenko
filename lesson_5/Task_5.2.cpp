#include<iostream>
#include <stdlib.h> 
#include <time.h>
using namespace std;

int Getcube(int size, int amount)
{
    int result = 0;
    srand(time(NULL));
    for (int i = 0; i < amount; i++)
    {
        result = result + (rand() % size + 1);
    }
    return result;
}

int main()
{
    int size, cube;

    cout << "Vvedite rozmer cubika: ";
    cin >> size;
    cout << "Vvedite kol cubikov: ";
    cin >> cube;
    cout << endl << "The amount point: " << Getcube(size, cube);
}
