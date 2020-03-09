#include <iostream>

using namespace std;

int main()
{
    int tree_size = 0;
    cout << "Enter tree size: ";
    cin >> tree_size;
    for (int num = 1; num <= tree_size; num++)
    {
        for (int space = 0; space < tree_size - num; space++)
        
            cout << " ";
        for (int star = 0; star < num * 2 - 1; star++)
            
            cout << "*";
        cout << endl;
    }
    for (int stump = 1; stump < tree_size; stump++)
        cout << " ";
    cout << "*";
}