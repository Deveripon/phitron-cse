#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    stringstream ss(str);

    string reversedWord;
    ss >> reversedWord;
    reverse(reversedWord.begin(), reversedWord.end());
    cout << reversedWord;
    while (ss >> reversedWord)
    {
        reverse(reversedWord.begin(), reversedWord.end());

        cout << " " << reversedWord;
    }

    return 0;
}