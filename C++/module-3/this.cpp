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

    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main()
{
    Student ripon("Rakib Hossain", 101, 4.56);
    ripon.displayInfo();

    return 0;
}