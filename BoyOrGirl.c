// https://codeforces.com/problemset/problem/236/A
#include <stdio.h>
#include <string.h>
int main()
{
    char name[101];
    scanf("%s", name);
    int count = 0;
    int length = strlen(name);
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (name[i] == name[j])
            {
                count++;
                break;
            }
        }
    }

    int distinctWords = length - count;
    if (distinctWords % 2 != 0)
    {
        printf("IGNORE HIM!");
    }
    else
    {
        printf("CHAT WITH HER!");
    }

    return 0;
}