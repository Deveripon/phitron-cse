#include <iostream>
using namespace std;


int *p; // declare pointer variable // akta pointer varibale nibo tai * deya lagche. 
void getValue(){
    int *x = new int;
    *x = 10;
    p = x;                                                             // assign value to a pointer address // pointer variable a kono value set korar somoy * deya lagena.
    cout << "Print the value of pointer from getValue:" << *p << endl; // print the value // print korar somoy * deya lage jodi oi pointer a set kora kono value ke access korte chai and jodi * na dile pointer ar address ta print hobe.
}

// Rule of thumb of a pointer is -> * dile value access hobe and  * na dile address access hobe.
int main(){

    getValue();
    cout << "Print the value of variable from main:" << *p << endl;
    return 0;
}  