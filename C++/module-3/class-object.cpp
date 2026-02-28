#include <iostream>
#include <cstring>
using namespace std;

class Student
{
public:
    char name[50];
    int roll;
    float gpa;
};

int main()
{
    Student ripon;
    cin.getline(ripon.name, 100);
    cin >> ripon.roll >> ripon.gpa;

    Student akash;
    cin.ignore(); // To ignore the newline character left in the buffer
    cin.getline(akash.name, 100);
    cin >> akash.roll >> akash.gpa;

    cout << "Name: " << ripon.name << endl;
    cout << "Roll: " << ripon.roll << endl;
    cout << "GPA: " << ripon.gpa << endl;

    cout << "Name: " << akash.name << endl;
    cout << "Roll: " << akash.roll << endl;
    cout << "GPA: " << akash.gpa << endl;
    return 0;
}