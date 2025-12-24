#include <iostream>
using namespace std;

int main(){

    string str = "Hello world";

    // size of string
    cout << str.size() << endl;

    // max size a string can have
    cout << str.max_size() << endl;

    // capacity of string
    cout << str.capacity() << endl;

    // length of string
    cout << str.length() << endl;


    // clear the string
  /*   str.clear(); */

    // resize the string
    str.resize(5);

    str.resize(20,'*');



    //print the string
    cout << str << endl;

    // check the string is empty or not
    cout << str.empty() << endl;

    
    
    return 0;
}