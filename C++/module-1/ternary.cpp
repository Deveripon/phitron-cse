#include <iostream>
using namespace std;

int main()
{
    int x = 11;

    (x > 10) ? cout << "X is greater than 10" << endl : cout << "X is not greater than 10" << endl;

    if (x > 10)
        cout << "X is greater than 10";
    return 0;
}