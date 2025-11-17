#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);

    // String Copy Operation -> Manual Implementation
    /*
    int length = strlen(str1);
    for (int i = 0; i <= length; i++)
    {
        str2[i] = str1[i];
    }
    */
    // String Copy Operation -> Using Built-in Function
    strcpy(str1, str2); // Copy str2 to str1 -> params (dest, src)

    printf("%s\n", str1);
    return 0;
}