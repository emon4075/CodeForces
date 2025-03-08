#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define PB push_back
#define All(V) V.begin(), V.end()
#define F first
#define S second
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl

const int MOD = 1e9 + 7;
const int INF = INT_MAX;

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
        int N, K, X;
        cin >> N >> K >> X;
        vector<int> V;
        for (int i = 1; i <= K; i++)
        {
            if (i == X)
            {
                continue;
            }
            V.PB(i);
        }
        if (V.empty())
        {
            NO;
            continue;
        }
        int L = V.back();
        int Times = N / L;
        int Rem = N % L;

        if (Rem == 0)
        {
            YES;
            cout << Times << endl;
            for (int i = 0; i < Times; i++)
            {
                cout << L << " ";
            }
            cout << endl;
        }
        else
        {
            bool found = false;
            for (auto i : V)
            {
                if (i == Rem)
                {
                    found = true;
                    break;
                }
            }
            if (found)
            {
                YES;
                cout << Times + 1 << endl;
                for (int i = 0; i < Times; i++)
                {
                    cout << L << " ";
                }
                cout << Rem << endl;
            }
            else
            {
                NO;
            }
        }
    }
    return 0;
}
