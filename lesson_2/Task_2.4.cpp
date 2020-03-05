#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the pyramids: ";
    cin >> size;
    for (int bottom = 0; bottom <= size; bottom++) {
        for (int stars1 = 0; stars1 < bottom; stars1++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "--------------" << endl;
    for (int top = 1; top <= size; top++) {
        for (int stars2 = top; stars2 <= size; stars2++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << "--------------" << endl;
    for (int iter = 1; iter <= size; iter++) {
        for (int free = 2; free <= iter; free++) {
            cout << " ";
        }
        for (int inv = iter; inv <= size; inv++) {
            cout << "*";
        }
        cout << endl;
    }
}