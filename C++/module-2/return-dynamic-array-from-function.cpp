#include <iostream>
using namespace std;

 int* getArray(){
    /* int arr[6]; static array*/
   int* arr = new int[6]; // dynamic array
    for (int i = 0; i < 6; i++)
    {
       cin >> arr[i];
    }
     
    return arr;
}

int main(){

   int* arr =  getArray();
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}