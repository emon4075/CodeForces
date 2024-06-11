#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        vector<int> V(N);
        for (int i = 0; i < N; i++)
        {
            cin >> V[i];
        }
        if (V[0] == V[N - 1])
        {
            int Count = 0;
            for (int i = 0; i < N; i++)
            {
                if (V[i] == V[0])
                {
                    Count++;
                }
            }
            if ((Count >= K))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            int NewIdx, First = V[0], Last = V[N - 1];
            int Count_First = 0, Count_Last = 0;
            for (int i = 0; i < N; i++)
            {
                if (V[i] == First)
                {
                    Count_First++;
                }
                if (Count_First == K)
                {
                    NewIdx = i;
                    break;
                }
            }
            if (Count_First < K)
            {
                cout << "NO" << endl;
            }
            else
            {
                for (int i = NewIdx; i < N; i++)
                {
                    if (V[i] == Last)
                    {
                        Count_Last++;
                    }
                }
                if (Count_First >= K && Count_Last >= K)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}