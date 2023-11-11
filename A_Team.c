// https://codeforces.com/problemset/problem/231/A
#include <stdio.h>
int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    while (n--)
    {
        int pro[3], one = 0;
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &pro[i]);
            if (pro[i] == 1)
            {
                one++;
            }
        }
        if (one >= 2)
        {
            ans++;
        }
    }
    printf("%d\n", ans);

    return 0;
}