#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    char ch[N];
    scanf("%s", ch);
    int Anton = 0, Danik = 0;
    for (int i = 0; i < N; i++)
    {
        if (ch[i] == 'A')
        {
            Anton++;
        }
        else
        {
            Danik++;
        }
    }
    if (Anton > Danik)
    {
        printf("Anton");
    }
    else if (Danik > Anton)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }
    return 0;
}