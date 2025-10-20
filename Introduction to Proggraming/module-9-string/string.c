#include <stdio.h>

int main(){


    // String input : scanf("%s", str); -> It takes only one word before space

    // String input : fgets(str, 100, stdin); -> It takes one line with spaces and new line - Recommended
    
    // String input : gets(str); -> It takes one line with spaces

    char str[100];
    fgets(str, 100, stdin);
    printf("%s\n", str);

    return 0;
}