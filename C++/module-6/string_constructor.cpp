#include <iostream>
using namespace std;

int main()
{
    string str = "Hello World!";
    string s("Sample String", 3, 5); // Constructs string with first 3 characters

    string x(4, 'A'); // Constructs string with 4 'A's
    cout << str << endl;
    cout << s << endl;
    cout << x << endl;

    return 0;
}