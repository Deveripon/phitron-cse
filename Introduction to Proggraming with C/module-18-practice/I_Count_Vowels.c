#include <stdio.h>

int count_vowel(char str[], int index)
{

    if (str[index] == '\0')
    {
        return 0;
    }
    int count = count_vowel(str, index + 1);
    char ch = str[index];
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        count++;
    }
    return count;
}

int main()
{
    char str[201];
    fgets(str, sizeof(str), stdin);
    int count = count_vowel(str, 0);
    printf("%d\n", count);
    return 0;
}