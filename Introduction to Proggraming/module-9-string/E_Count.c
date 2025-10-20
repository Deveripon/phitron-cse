#include <stdio.h>
#include <string.h>

int main(){

    char str[1000001];
    scanf("%s", str);
    int sum = 0;
    int length = strlen(str);
    for (int i = 0; i <length; i++)
    {
        int num = str[i]-48; // ASCII of 0 is 48  >> when a string digit is need to convert to number than formula is substract 48 from its ASCII value
        sum = sum + num;
    }

    printf("%d", sum);
    
    return 0;
}   