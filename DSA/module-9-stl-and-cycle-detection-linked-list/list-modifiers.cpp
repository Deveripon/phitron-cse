#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> l = {1, 7, 2, 2, 3, 4, 5};
    list<int> l2;
    l2 = l;
    l2.push_back(6);  // adds 6 at the end
    l2.push_front(0); // adds 0 at the beginning
    l2.pop_back();    // removes the last element
    l2.pop_front();   // removes the first element

    l2.reverse(); // reverses the list

    l2.sort(); // sorts the list

    l2.unique(); // removes duplicates

    cout << *next(l2.begin(), 2) << endl; // returns an iterator to the next element

    l2.insert((next(l2.begin(), 2)), 10); // inserts 10 at the 3rd position
    l2.erase(next(l2.begin(), 2));        // removes the 3rd element

    /* cout << l2.size() << endl; */
    replace(l2.begin(), l2.end(), 2, 20); // replaces all occurrences of 2 with 20

    auto it = find(l2.begin(), l2.end(), 3); // finds the first occurrence of 3

    if (it != l2.end())
    {
        cout << "Element found: " << *it << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    for (int i : l2)
    {
        cout << i << " ";
    }

    return 0;
}