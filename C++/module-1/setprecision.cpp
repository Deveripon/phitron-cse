#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double d = 10.543534;

    cout << fixed << setprecision(2) << d << endl;
    return 0;
}