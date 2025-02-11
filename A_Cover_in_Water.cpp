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
        int N;
        cin >> N;
        string S;
        cin >> S;
        int HashCount = 0;
        for (char c : S)
        {
            if (c == '#')
            {
                HashCount++;
            }
        }
        if (HashCount == N)
        {
            cout << 0 << endl;
            continue;
        }
        int Count = 0;
        for (int i = 0; i < N - 2;)
        {
            if (S[i] == '.' && S[i + 1] == '.' && S[i + 2] == '.')
            {
                Count += 2;
                i += 3;
                break;
            }
            else
            {
                i++;
            }
        }
        if (Count == 0)
        {
            cout << N - HashCount << endl;
        }
        else
        {
            cout << Count << endl;
        }
    }
    return 0;
}