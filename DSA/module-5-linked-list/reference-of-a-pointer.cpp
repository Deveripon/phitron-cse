#include <iostream>
using namespace std;

void printValue(int *ptr)
{

    int y = 100;
    ptr = NULL;
}
int main()
{
    int value = 42;
    int *ptr = &value;

    printValue(ptr); //

    /* cout << "Printing value using pointer in main scope: " << *ptr << endl; */

    cout << "address of pointer in main scope: " << ptr << endl;

    return 0;
}