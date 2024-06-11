#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;
        int Count_1 = 0, Count_2 = 0, Max_1 = 0, Max_2 = 0;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == '<')
            {
                Count_1++;
            }
            else
            {
                Max_1 = max(Max_1, Count_1);
                Count_1 = 0;
            }
        }
        Max_1 = max(Count_1, Max_1);
        for (int i = 0; i < N; i++)
        {
            if (S[i] == '>')
            {
                Count_2++;
            }
            else
            {
                Max_2 = max(Max_2, Count_2);
                Count_2 = 0;
            }
        }
        Max_2 = max(Count_2, Max_2);
        cout << max(Max_1, Max_2) + 1 << endl;
    }
    return 0;
}