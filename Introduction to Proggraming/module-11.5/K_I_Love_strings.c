/**
 * K. I Love strings
time limit per test2 seconds
memory limit per test64 megabytes
Given two strings S and T. Print a new string that contains the following:

The first letter of the string S followed by the first letter of the string T.
the second letter of the string S followed by the second letter of the string T.
and so on...
In other words, the new string should be ( S0 + T0 + S1 + T1 + .... ).
Note: If the length of S is greater than the length of T then you have to add the rest of S letters at the end of the new string and vice versa.

Input
The first line contains a number N (1 ≤ N ≤ 50) the number of test cases.

Each of the N following lines contains two string S, T (1 ≤ |S|, |T| ≤ 50) consists of lower and upper English letters.

Output
For each test case, print the required string.

Example
InputCopy
2
ipAsu ccsit
ey gpt
OutputCopy
icpcAssiut
egypt


*/

#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    
    for(int test = 0; test < n; test++){
        char s[51], t[51];
        scanf("%s %s", s, t);
        
        int sLen = strlen(s);
        int tLen = strlen(t);
        int minLen = sLen < tLen ? sLen : tLen;
        
        char result[101];
        int idx = 0;
        
        // Merge characters alternately from both strings
        for(int i = 0; i < minLen; i++){
            result[idx++] = s[i];
            result[idx++] = t[i];
        }
        
        // Add remaining characters from s if it's longer
        for(int i = minLen; i < sLen; i++){
            result[idx++] = s[i];
        }
        
        // Add remaining characters from t if it's longer
        for(int i = minLen; i < tLen; i++){
            result[idx++] = t[i];
        }
        
        result[idx] = '\0';
        printf("%s\n", result);
    }
    
    return 0;
}