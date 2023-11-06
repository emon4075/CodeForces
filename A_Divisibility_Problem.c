// https://codeforces.com/problemset/problem/1328/A
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int a, b;
        scanf("%lld %lld", &a, &b);
        if (a % b == 0)
        {
            printf("0\n");
        }
        else
        {
            printf("%lld\n", (b - (a % b)));
        }
    }
    return 0;
}