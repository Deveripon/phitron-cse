#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // string s;
    char s[100];
    // cin.ignore(); // for ignore first char
    // cin >> fgets(s, 100, stdin);
    // cin >> s;
    cin.getline(s, 100);
    cout
        << s << endl;
    return 0;
}