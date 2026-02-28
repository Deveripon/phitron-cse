/**
 * Replace Word
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given two strings S and X. You need to replace all X from string S with a '#' sign.

Input Format

First line will contain T, the number of test cases.
Next T lines will contain a line with S and X.
Constraints

1 <= T <= 1000
1 <= |S|, |X| <= 1000
|X| <= |S|
Output Format

For each test cases output the modified string S.
Sample Input 0

2
rahimisagoodguy good
canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you
Sample Output 0

rahimisa#guy
can#tellmewhereicanfindheriwillbegreatefulto#if#tellmetheanswer
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{

    int text_cases;
    cin >> text_cases;

    while (text_cases--)
    {
        string str, x;
        cin >> str >> x;
        int size_x = x.size();

        int position_x = str.find(x);

        while (str.find(x) != string::npos)
        {
            position_x = str.find(x);
            str.replace(position_x, size_x, "#");
        }
        cout << str << endl;
    }

    return 0;
}