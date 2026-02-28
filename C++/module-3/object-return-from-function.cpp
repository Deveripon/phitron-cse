#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int roll;
    double gpa;

    Student(string name, int roll, double gpa)
    {
        this->name = name;
        this->roll = roll;
        this->gpa = gpa;
        // (*this).name = name;
        // (*this).roll = roll;
        // (*this).gpa = gpa;
    }

    Student displayInfo()
    {
        Student ripon("Rakib Hossain", 101, 4.56);
        return ripon;
    }
};

int main()
{
    Student ripon("Rakib Hossain", 101, 4.56);
    Student returnedStudent = ripon.displayInfo();
    cout << "Name: " << returnedStudent.name << endl;
    cout << "Roll: " << returnedStudent.roll << endl;
    cout << "GPA: " << returnedStudent.gpa << endl;
    return 0;
}