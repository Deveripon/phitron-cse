#include <stdio.h>

int main(){

    int arrLen;
    scanf("%d", &arrLen);

    int arr[arrLen];

    for (int i = 0; i < arrLen; i++)
    {
       scanf("%d", &arr[i]);
    }

    // finding the max and min
    int max = 0;
    int min = 0;

    for (int i = 0; i < arrLen; i++)
    {
      if (arr[i]>=max)
      {
        max = arr[i];
      }
      if(arr[i]<=min){
        min = arr[i];
      }  
    } 



    int freq[max+1];

    for (int i = min; i < arrLen; i++)
    {
        freq[i] = 0; // freq[0] = 0 - set all values to 0  and remove garbage value
        int val = arr[i]; // 1  
        freq[val]++; // freq[1]++
    }

    for (int i = 0; i < 8; i++)
    {
          printf("%d -> %d\n", i, freq[i]); 
    }
    
    return 0;
}