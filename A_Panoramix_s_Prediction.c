// https://codeforces.com/problemset/problem/80/A
#include <stdio.h>
int main()
{
    int n, m, count = 0, nextPrime;
    scanf("%d %d", &n, &m);
    for (int i = 2; i < m; i++)
    {
        if (m % i == 0)
        {
            count = 1;
            break;
        }
    }
    if (count == 1)
    {
        printf("NO\n");
    }
    else
    {
        for (int i = n + 1;; i++)
        {
            int flag = 0;
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    flag++;
                    break;
                }
            }
            if (flag == 0)
            {
                nextPrime = i;
                if (nextPrime == m)
                {
                    printf("YES\n");
                    break;
                }
                else
                {
                    printf("NO\n");
                    break;
                }
            }
        }
    }
    return 0;
}