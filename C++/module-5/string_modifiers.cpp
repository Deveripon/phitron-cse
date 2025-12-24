#include <iostream>
#include <string>
using namespace std;

int main(){

    string s = "Hello world ";
     string str = "Hello ";

    // string concatenation
   /*   s += str;  */

     // string append
    /*  s.append(str); */

     // string insert
    /*  s.insert(0, str); */


    // insert a charecter at last
    /* s.push_back('!'); */


    // remove a charecter from last
    /*  s.pop_back(); */

    
    // erase a portion from string
/*     s.erase(0,5); */



    // replace a portion from string
   /*  s.replace(5,7," Bangladesh");
 */

// insert a charecter at a specific position
    s.insert(5," Bangladesh");

     // print the string
     cout << s << endl;
     return 0;
}