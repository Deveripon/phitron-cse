#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int marks;
    int roll;
};

int main()
{
    int size;
    cin >> size;

    Student studentsArr[size];

    // take input for array of objects
    for (int i = 0; i < size; i++)
    {
        cin.ignore();
        getline(cin, studentsArr[i].name);
        cin >> studentsArr[i].marks >> studentsArr[i].roll;
    }

    // printing all students data
    cout << "Printing all students data: ==============================" << endl;
    ;
    for (int i = 0; i < size; i++)
    {
        cout << "Name: " << studentsArr[i].name << ", Marks: " << studentsArr[i].marks << ", Roll: " << studentsArr[i].roll << endl;
    }

    // printing student with minimum marks
    cout << "Student with minimum marks: ==============================" << endl;
    ;

    int minIndex = 0;

    for (int i = 0; i < size; i++)
    {
        if (studentsArr[i].marks < studentsArr[minIndex].marks)
        {
            minIndex = i;
        }
    }

    cout << "Name: " << studentsArr[minIndex].name << ", Marks: " << studentsArr[minIndex].marks << ", Roll: " << studentsArr[minIndex].roll << endl;

    return 0;
}