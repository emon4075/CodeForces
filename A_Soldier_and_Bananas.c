// https://codeforces.com/problemset/problem/546/A
#include <stdio.h>
int main()
{
    long long int k, n, w, cost, borrow;
    scanf("%lld %lld %lld", &k, &n, &w);
    w = (w * (w + 1)) / 2;
    cost = w * k;
    borrow = cost - n;
    if (borrow >= 0)
    {
        printf("%lld\n", borrow);
    }
    else
    {
        printf("0\n");
    }
    return 0;
}