#include <iostream>
using namespace std;

int main(){

    string str = "Hello world";
    

    // print the string
    cout << str << endl;


    // print the string by loop
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << endl;
    }

    // print the string by iterator
    for (auto it = str.begin();
         it != str.end(); it ++)
    {
        cout << *it << endl;
    }

    return 0;
}