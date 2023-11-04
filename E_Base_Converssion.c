#include <stdio.h>
void base_conv(int N)
{
    if (N == 0)
    {
        return;
    }
    int r = N % 2;
    N = N / 2;
    base_conv(N);
    printf("%d", r);
}
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        base_conv(N);
        printf("\n");
    }

    return 0;
}