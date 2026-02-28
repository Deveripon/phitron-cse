#include <iostream>
#include <cstring>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    double gpa;

    Student(string student_name, int student_roll, double student_gpa)
    {
        name = student_name;
        roll = student_roll;
        gpa = student_gpa;
    }

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main()
{
    string name;
    int roll;
    double gpa;

    getline(cin, name);
    cin >> roll >> gpa;

    Student ripon(name, roll, gpa);
    ripon.displayInfo();

    return 0;
}