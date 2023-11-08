#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int A[3], Temp;
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &A[i]);
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {
                if (A[i] < A[j])
                {
                    Temp = A[j];
                    A[j] = A[i];
                    A[i] = Temp;
                }
            }
        }

        printf("%d\n", A[1]);
    }

    return 0;
}
