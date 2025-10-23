#include <stdio.h>
#include <string.h>
int main(){

   static char str[10000001];
    scanf("%s", str);
    int strLen = strlen(str);

    int freq[26] = {0};

    for (int i = 0; i < strLen; i++)
    {
    
        freq[str[i] - 'a']++;
    }
    
    for (int i = 0; i < 26; i++)
    {
           if (freq[i] > 0)  
        {
            printf("%c : %d\n", i + 'a', freq[i]);
        }
    }


    return 0;
}

