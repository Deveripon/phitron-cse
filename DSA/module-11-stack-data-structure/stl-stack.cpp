#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
/*     !s.empty()?s.pop():void();
    !s.empty()?s.pop():void();
    !s.empty()?s.pop():void(); */
    if(!s.empty()){
    s.pop();
    }
    if(!s.empty()){
    s.top();
    };

    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;
    return 0;
}