#include <iostream>

using namespace std;

int main()
{
    int number[10], school;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter number school: ";
        cin >> number[i];
    }
    int not_school=0;
    cout << "Enter number your school: ";
    cin >> school;
    
    for (int c = 0; c <= 10; c++)
    { 
        if (school == number[c])
        {
            not_school = 1;
            cout << "I know this school!";
        }
    }
    if (not_school == 0)
    {
        cout << "I don't know this school";
    }
}
