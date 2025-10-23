#include <stdio.h>

int main(){
    int arrLength, maxPossibleNumber;

    scanf("%d %d", &arrLength, &maxPossibleNumber);

    int arr[arrLength];

    for (int i = 0; i < arrLength; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int freq[100001] = {0};

    for (int i = 0; i < arrLength; i++)
    {
        freq[arr[i]]++;
    }
    
    for (int i = 1; i <= maxPossibleNumber; i++)
    {
        printf("%d\n",freq[i]);
    }
    







 


    
    
    return 0;
}