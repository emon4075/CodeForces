#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    scanf("%s", s);
    int capital = 0, small = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            small++;
        }
        else
        {
            capital++;
        }
    }
    if (capital > small)
    {
        for (int i = 0; i < 100; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - 32;
            }
        }
        printf("%s\n", s);
    }
    else
    {
        for (int i = 0; i < 100; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] + 32;
            }
        }
        printf("%s\n", s);
    }

    return 0;
}