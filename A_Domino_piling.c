// https://codeforces.com/problemset/problem/50/A
#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int area = N * M;
    int Needed = area / 2;
    printf("%d", Needed);
    return 0;
}