#include <iostream>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {

        int liftA, liftB, goingTo;
        cin >> liftA >> liftB >> goingTo;
        int ImIn = 1;
        int timeOfLiftA = liftA - ImIn; // lift A is coming to 1
        int timeOfLiftB = abs(liftB - goingTo) + goingTo - ImIn;

        if (timeOfLiftA < timeOfLiftB)
        {
            cout << 1 << endl;
        }
        else if (timeOfLiftA > timeOfLiftB)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }

    return 0;
}