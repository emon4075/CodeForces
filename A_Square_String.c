// https://codeforces.com/problemset/problem/1619/A
#include <stdio.h>
#include <string.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    while (t--)
    {
        char s[101], cpy[100];
        scanf("%s", &s);
        int length = strlen(s);
        if (length % 2 != 0)
        {
            printf("NO\n");
        }
        else
        {
            int End = length / 2;
            for (i = 0; i < End; i++)
            {
                cpy[i] = s[i];
            }
            cpy[i] = '\0';
            int k = 0, count = 0;
            for (i = End; i < length; i++)
            {
                if (cpy[k] != s[i])
                {
                    count = 1;
                    break;
                }
                else
                {
                    count = 0;
                }
                k++;
            }
            if (count == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}