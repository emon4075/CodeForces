#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define PB push_back
#define All(A) A.begin(), A.end()
#define F first
#define S second

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
        int N;
        cin >> N;
        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> B[i];
        }
        int Count = 0;
        for (int i = 0; i < N; i++)
        {
            if (A[i] < B[i])
            {
                Count++;
            }
        }
        if (Count >= 2)
        {
            cout << "NO" << endl;
        }
        else if (Count == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            ll MX = INT_MIN;
            ll MN = INT_MAX;
            for (ll i = 0; i < N; i++)
            {
                if (A[i] < B[i])
                {
                    MX = B[i] - A[i];
                }
                else
                {
                    MN = min(MN, (ll)(A[i] - B[i]));
                }
            }
            if (MX <= MN)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
