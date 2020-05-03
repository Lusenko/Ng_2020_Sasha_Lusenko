#include<iostream>
#include "student.h"
using namespace std;

int main()
{
    string uName;
    string uSurname;
    int uAge;
    string uSex;
    string uStudyForm;

    Student student;

    cout << "Enter name: ";
    cin >> uName;
    student.setName(uName);

    cout << "Enter surname: ";
    cin >> uSurname;
    student.setSurname(uSurname);

    cout << "Enter age: ";
    cin >> uAge;
    student.setAge(uAge);

    cout << "Enter sex: ";
    cin >> uSex;
    student.setSex(uSex);

    cout << "Enter u study form: ";
    cin >> uStudyForm;
    student.setStudyForm(uStudyForm);

    cout << student.getName() << endl;
    cout << student.getSurname() << endl;
    cout << student.getAge() << endl;
    cout << student.getSex() << endl;
    cout << student.getStudyForm() << endl;

    return 0;
}
