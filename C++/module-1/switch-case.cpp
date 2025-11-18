#include <iostream>
using namespace std;
int main()
{
    int age = 15;
    switch (age)
    {
    case 10:
        cout << "Too young\n";
        break;

    case 15:
        cout << "Teenage\n";
        break;

    case 18:
        cout << "Perfect\n";
        break;

    default:
        cout << "Printing Default\n";
    }

    return 0;
}