#include<iostream>
using namespace std;
int main()
{
    int employee1, employee2, employee3;
    cout << "\t\t\t\t\t\t****Salary employees****\n";
    cout << "Enter the salary of the first worker: ";
    cin >> employee1;
    cout << "Enter the salary of the second worker: ";
    cin >> employee2;
    cout << "Enter the salary of the third worker: ";
    cin >> employee3;
    if (employee1 > employee2 and employee2 > employee3 and employee1 > employee3)
    {
        cout << employee1 - employee3;
    }
    if (employee1 > employee3 and employee3 > employee2 and employee1 > employee2)
    {
        cout << employee1 - employee2;
    }
    if (employee1 > employee3 and employee3 > employee2 and employee1 > employee2)
    {
        cout << employee2 - employee1;
    }
    if (employee2 > employee1 and employee1 > employee3 and employee2 > employee3)
    {
        cout << employee2 - employee3;
    }
    if (employee3 > employee1 and employee1 > employee2 and employee3 > employee2)
    {
        cout << employee3 - employee2;
    }
    if (employee3 > employee2 and employee2 > employee1 and employee3 > employee1)
    {
        cout << employee3 - employee1;
    }
}