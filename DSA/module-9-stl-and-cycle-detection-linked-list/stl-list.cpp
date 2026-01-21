#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{

    // Create an empty list of integers
    // list<int> l;

    //=============
    /* list<int> l(10); */ // Creates a list with 10 default-initialized elements (0 for int)

    vector<int> v = {1, 2, 3, 4, 5};
    int arr[] = {1, 2, 3, 4, 5};
    list<int> l1(v.begin(), v.end()); // Creates a list with 5 elements, each initialized to 100

    list<int> l(l1); // Creates a list with 10 default-initialized elements (3 for int)

    /* cout << *l.begin() << endl; */ // Outputs the firt element of the list

    // =============
    // printing the list
    /*   for (auto i = l.begin(); i != l.end(); i++)
      {
          cout << *i << " ";
      } */
    l.resize(2); // resize the list to contain 2 elements
    //  l.clear(); // clears the list
    // l.size(); // returns the size of the list
    //    l.empty(); // returns true if the list is empty, false otherwise
    /* cout << l.size() << endl; */

    // Using range-based for loop to print the list
    for (int i : l)
    {
        cout << i << " ";
    }

    return 0;
}