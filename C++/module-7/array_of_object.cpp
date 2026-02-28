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
    Student studentsData[size];

    // input array of objects
    for (int i = 0; i < size; i++)
    { 
        cin.ignore(); // to ignore the newline character left in the buffer
        getline(cin, studentsData[i].name);

        cin >> studentsData[i].marks >> studentsData[i].roll;
    }

    // output array of objects
    for (int i = 0; i < size; i++)
    {
        cout << "Name: " << studentsData[i].name << ", Marks: " << studentsData[i].marks << ", Roll: " << studentsData[i].roll << endl;
    }

    return 0;
}