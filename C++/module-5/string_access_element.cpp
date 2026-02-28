#include <iostream>
using namespace std;

int main(){

    string str;
    // take input string
    cin >> str;

    // print the string
    cout << str << endl;

    // access the element of string using index -> it will return the character of that index
    cout << str[0] << endl;


    // access the element of string using at -> it will return the character of that index
    cout << str.at(0) << endl;


    // access the element of string using front -> it will return the character of first index
    cout << str.front() << endl;


    // access the element of string using back -> it will return the character of last index
    cout << str.back() << endl;

    return 0;
}