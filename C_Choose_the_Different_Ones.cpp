#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M, K;
        cin >> N >> M >> K;
        int Satisfy = K / 2;
        vector<int> V1(N), V2(M);
        unordered_set<int> S1, S2;
        for (int i = 0; i < N; i++)
        {
            cin >> V1[i];
            if (V1[i] <= K)
            {
                S1.insert(V1[i]);
            }
        }
        for (int i = 0; i < M; i++)
        {
            cin >> V2[i];
            if (V2[i] <= K)
            {
                S2.insert(V2[i]);
            }
        }
        int Count1 = 0, Count2 = 0, CommonCount = 0;
        for (auto i : S1)
        {
            if (S2.count(i))
            {
                CommonCount++;
            }
            else
            {
                Count1++;
            }
        }
        for (auto i : S2)
        {
            if (!S1.count(i))
            {
                Count2++;
            }
        }
        if (Count1 > Satisfy || Count2 > Satisfy || (Count1 + Count2 + CommonCount) < K)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
