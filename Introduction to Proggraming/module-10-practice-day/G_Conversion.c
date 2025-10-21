/**
 * G. Conversion
time limit per test2 seconds
memory limit per test64 megabytes
Given a string S. Print the origin string after replacing the following:

Replace every comma character ',' with a space character.
Replace every capital character in S with its respective small character and Vice Versa.
Input
Only one line contains a string S (1 ≤ |S| ≤ 105) where |S| is the length of the string and it consists of lower and upper English letters and comma character ','.

Output
Print the string after the conversion.

Example
InputCopy
happy,NewYear,enjoy
OutputCopy
HAPPY nEWyEAR ENJOY
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100001];
    scanf("%s", str);
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (str[i] == ',')
        {
            str[i] = ' ';
        }
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("%s\n", str);

    return 0;
}