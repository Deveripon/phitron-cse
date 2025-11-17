#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);

    // String Cmparison -> Built-in Function
    int result = strcmp(str2, str1); // Compare str1 and str2

    printf("%d\n", result); // Print the comparison result
    if (result == 0)
    {
        printf("Strings are equal\n");
    }
    else if (result < 0)
    {
        printf("str2 is less than str1\n");
    }
    else
    {
        printf("str2 is greater than str1\n");
    }
    return 0;
}