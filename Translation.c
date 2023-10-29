// https://codeforces.com/problemset/problem/41/A
#include <stdio.h>
#include <string.h>
int main()
{
    char s[101], t[101];
    scanf("%s ", s);
    scanf("%s", t);
    char cpy[101];
    int stringLength = strlen(s);
    int k = 0;
    for (int i = stringLength - 1; i >= 0; i--)
    {
        cpy[k] = s[i];
        k++;
    }
    cpy[k] = '\0';
    if (strcmp(t, cpy) == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
    }
    return 0;
}