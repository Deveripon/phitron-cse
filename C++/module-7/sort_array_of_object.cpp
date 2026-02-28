#include <iostream>
#include <algorithm>
using namespace std;

class Student
{
public:
    string name;
    int marks;
    int roll;
};

bool sortByMarks(Student a, Student b)
{
    return a.marks < b.marks;
}

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

    // sorting array of objects based on marks in ascending order

    sort(studentsArr, studentsArr + size, sortByMarks);

    // printing sorted students data
    cout << "Printing sorted students data by marks (ascending order): ==============================" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Name: " << studentsArr[i].name << ", Marks: " << studentsArr[i].marks << ", Roll: " << studentsArr[i].roll << endl;
    }

    return 0;
}