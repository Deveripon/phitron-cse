#include <iostream>
using namespace std;

class Students
{
public:
    string name;
    int cls;
    char section;
    int id;
};

void takeInputs(Students student[], char sections[], int test_cases)
{

    for (int i = 0; i < test_cases; i++)
    {
        cin >> student[i].name >> student[i].cls >> student[i].section >> student[i].id;
        sections[i] = student[i].section;
    }
};

void reverseArray(char arr[], int test_cases)
{
    int left = 0;
    int right = test_cases - 1;
    char temp;
    while (left < right)
    {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main()
{
    int test_cases;
    cin >> test_cases;

    Students student[test_cases];
    char sections[test_cases];

    takeInputs(student, sections, test_cases);

    reverseArray(sections, test_cases);

    // reverse the section of array

    for (int i = 0; i < test_cases; i++)
    {
        student[i].section = sections[i];
    }

    // print the result
    for (int i = 0; i < test_cases; i++)
    {
        cout << student[i].name << " " << student[i].cls << " " << student[i].section << " " << student[i].id << endl;
    }

    return 0;
}
