#include <iostream>
using namespace std;

int main()
{
    int testCases;

    cin >> testCases;
    int totalSpace = 15;
    int maxBigIconInScreen = 2;

    while (testCases--)
    {
        int smallIcon, bigIcon;
        cin >> smallIcon >> bigIcon;

        // Calculate how many screens takes the Big Icons
        int screensForBigIcons = (bigIcon + maxBigIconInScreen - 1) / maxBigIconInScreen;

        // Every screen has 15 slots. Every big icon takes 4.
        int totalRemaingSlot = (screensForBigIcons * 15) - (bigIcon * 4);

        int remaingSmallIcon = 0;
        int extraScreen = 0;

        //  check if small icons exceed the remaing space
        if (smallIcon > totalRemaingSlot)
        {
            remaingSmallIcon = smallIcon - totalRemaingSlot;
        }

        if (remaingSmallIcon > 0)
        {
            extraScreen = (remaingSmallIcon + totalSpace - 1) / totalSpace;
        }

        cout << screensForBigIcons + extraScreen << endl;
    }

    return 0;
}