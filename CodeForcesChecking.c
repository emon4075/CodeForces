#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char c;
        scanf("%c", &c);
        getchar();
        char str[11] = "codeforces";
        int count = 0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] == c)
            {
                count++;
            }
        }
        if (count > 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}