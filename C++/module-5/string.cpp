#include <iostream>
#include <string>
using namespace std;

int main(){

    string s = "Hello world";
    string str = "Hello";

    if( s == str){
        cout << "Equal" << endl;
    }else{
        cout << "Not equal" << endl;
    }

    return 0;
}