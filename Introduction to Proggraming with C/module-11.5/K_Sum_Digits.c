#include <stdio.h>
#include <string.h>

int main(){

    int length;
    scanf("%d", &length);

    char digits[length];
    scanf("%s", digits);

    int strLen = strlen(digits);
    int sum = 0;
    
    for (int i = 0; i < strLen; i++)
    {
        sum = sum + digits[i] - 48;
    }

    printf("%d", sum);

    return 0;
}