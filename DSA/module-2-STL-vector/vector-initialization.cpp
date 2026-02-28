#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> v; -> initialization type 1
    // vector<int> v(5); -> initialize vector with size
    // vector<int> v(5, 0); -> initialize vector with size and value
    // vector<int> v2(v); -> inttialize vector by copying another vector
    int a[5] = {
        1,
        2,
        3,
        4,
        5,
    };
    vector<int> v2(a, a + 3); // initialize vector by copying another vector and with position of copied vector
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    v2.
    return 0;
}