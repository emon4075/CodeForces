// https://codeforces.com/problemset/problem/281/A
#include <stdio.h>
#include <string.h>
int main()
{
    char S[1001];
    scanf("%s", S);
    if (S[0] >= 'A' && S[0] <= 'Z')
    {
        printf("%s", S);
    }
    else
    {
        S[0] = S[0] - 32;
        printf("%s", S);
    }

    return 0;
}