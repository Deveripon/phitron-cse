#include <stdio.h>
#include <string.h>

int main()
{

    char a[100], b[100];
    scanf("%s %s", a, b);
    // String Concatenation -> Manual Implementation
    /*
    int length_a = strlen(a);
    int length_b = strlen(b);

    // Concatenate a after b
    for (int i = 0; i <= length_a; i++)
    {
        b[length_b + i] = a[i];
    }
    */
    // String Concatenation -> Using Built-in Function
    strcat(b, a); // Concatenate a after b -> params (dest, src)
    printf("%s\n", b);

    return 0;
}