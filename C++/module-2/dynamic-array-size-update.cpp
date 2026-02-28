#include <iostream>
using namespace std;

int main(){
   /*  int arr[6]; */ // static array

   int *arr = new int[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    int *modifiedArr = new int[8]; // update array size -> first copy all from old array -> add new value to the modified array
    for (int i = 0; i < 6; i++)
    {
      modifiedArr[i] = arr[i];
    }

    modifiedArr[6] = 100;
    modifiedArr[7] = 200;

    delete [] arr; // delete the old array
    for (int i = 0; i < 8; i++)
    {
        cout << modifiedArr[i] << " ";
    }
    

    return 0;
}