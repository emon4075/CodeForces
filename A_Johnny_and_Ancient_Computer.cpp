#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define PB push_back
#define All(V) V.begin(), V.end()
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
        ll A, B;
        cin >> A >> B;
        if (A == B)
        {
            cout << 0 << endl;
        }
        else if (A > B)
        {
            int Count = 0;
            bool possible = false;
            while (A > B)
            {
                if (A % 2 == 0)
                {
                    A = A >> 1;
                    Count++;
                }
                else
                {
                    break;
                }
                if (A == B)
                {
                    possible = true;
                    break;
                }
            }
            if (possible)
            {
                cout << (Count + 2) / 3 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            int Count = 0;
            bool possible = false;
            while (A < B)
            {
                A = A << 1;
                Count++;
                if (A == B)
                {
                    possible = true;
                    break;
                }
            }
            if (possible)
            {
                cout << (Count + 2) / 3 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}
