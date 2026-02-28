#include <iostream>
#include <list>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    list<string> browserHistory;
    string url;
    while (cin >> url && url != "end")
    {
        browserHistory.push_back(url);
    }
    int queries;
    cin >> queries;
    cin.ignore(); // To ignore the newline character after the queries input

    auto current = browserHistory.begin();

    while (queries--)
    {
        string command;
        getline(cin, command);
        stringstream ss(command);

        string commandName, url;
        ss >> commandName;

        if (commandName == "visit")
        {
            ss >> url;

            auto it = find(browserHistory.begin(), browserHistory.end(), url);

            if (it != browserHistory.end())
            {
                current = it;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (commandName == "next")
        {

            auto temp = next(current);
            if (temp != browserHistory.end())
            {
                current = temp;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (commandName == "prev")
        {

            if (current != browserHistory.begin())
            {
                current = prev(current);
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }

    return 0;
}