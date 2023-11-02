// https://codeforces.com/problemset/problem/617/A
#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    scanf("%d", &x);
    int res = ceil(x / 5.0);
    printf("%d\n", res);
    return 0;
}