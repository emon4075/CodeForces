// https://codeforces.com/problemset/problem/339/A
#include <stdio.h>
#include <string.h>
int main()
{
    char S[101];
    scanf("%s", &S);
    int temp, k = 0, length = strlen(S);
    char cpy[length];
    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i] >= '0' && S[i] <= '9')
        {
            cpy[k] = S[i];
            k++;
        }
    }
    cpy[k] = '\0';
    int cpyLength = strlen(cpy);
    for (int i = 0; i < cpyLength - 1; i++)
    {
        for (int j = i + 1; j < cpyLength; j++)
        {
            if (cpy[i] >= cpy[j])
            {
                temp = cpy[i];
                cpy[i] = cpy[j];
                cpy[j] = temp;
            }
        }
    }
    printf("%c", cpy[0]);
    for (int i = 1; i < cpyLength; i++)
    {
        printf("+%c", cpy[i]);
    }

    return 0;
}