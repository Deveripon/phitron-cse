#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l = {1, 30, 2, 3, 30, 4, 5};
    /*
        l.remove(3); // removes all occurrences of 3

        l.sort();    // sorts the list
        l.unique();  // removes all duplicates */
    l.reverse(); // reverses the list

    cout << *next(l.begin(), 3) << endl;

    for (auto i : l)
    {
        cout << i << " ";
    }

    return 0;
}