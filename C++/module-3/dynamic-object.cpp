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
};

Student displayInfo()
{
    Student *rakib = new Student("Rakib Hossain", 101, 4.56);

    return *rakib;
}
int main()
{

    Student *rakib = new Student("Rakib Hossain", 101, 4.56);
    cout << "Name: " << (*rakib).name << endl;
    cout << "Roll: " << rakib->roll << endl;
    cout << "GPA: " << rakib->gpa << endl;

    Student returnedStudent = displayInfo();
    cout << "Name: " << returnedStudent.name << endl;
    cout << "Roll: " << returnedStudent.roll << endl;
    cout << "GPA: " << returnedStudent.gpa << endl;
    return 0;
}