#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

void FASTIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    FASTIO();
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

        int Dist = INT_MAX;
        int Counter = 0;

        for (int i = 0; i < N; i++)
        {
            if (V[i] % 2 == 0)
            {
                Counter++;
            }
            if (V[i] % K == 0)
            {
                Dist = 0;
            }
            else
            {
                int nextMultiple = ((V[i] / K) + 1) * K;
                Dist = min(Dist, nextMultiple - V[i]);
            }
        }

        if (K != 4)
        {
            cout << Dist << endl;
        }
        else
        {
            if (Counter >= 2)
            {
                cout << 0 << endl;
            }
            else if (Counter == 1)
            {
                cout << min(Dist, 1) << endl;
            }
            else
            {
                cout << min(Dist, 2) << endl;
            }
        }
    }
    return 0;
}
