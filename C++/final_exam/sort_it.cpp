#include <iostream>
#include <algorithm>
using namespace std;

class Students
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

bool sortStudents(Students a, Students b)

// sort the students data according to the total marks (sum of math_marks and eng_marks) in descending order. If multiple student have the same total marks then sort them according to the id in ascending order as the id will be unique.
{
    if ((a.math_marks + a.eng_marks) == (b.math_marks + b.eng_marks))
        return a.id < b.id;
    else
        return (a.math_marks + a.eng_marks) > (b.math_marks + b.eng_marks);
};

int main()
{

    int test_cases;
    cin >> test_cases;
    Students student[test_cases];

    // take inputs
    for (int i = 0; i < test_cases; i++)
    {
        cin >> student[i].name >> student[i].cls >> student[i].section >> student[i].id >> student[i].math_marks >> student[i].eng_marks;
    }
    // sort based on math marks in descending order
    sort(student, student + test_cases, sortStudents);

    // print the result
    for (int i = 0; i < test_cases; i++)
    {
        cout << student[i].name << " " << student[i].cls << " " << student[i].section << " " << student[i].id << " " << student[i].math_marks << " " << student[i].eng_marks << endl;
    }
    return 0;
}