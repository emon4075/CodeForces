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
        map<int, int> freq;
        int X;
        for (int i = 0; i < N; i++)
        {
            cin >> X;
            freq[X]++;
        }
        int Num = -1;
        for (auto &i : freq)
        {
            if (i.S >= 3)
            {
                Num = i.F;
            }
        }
        cout << Num << endl;
    }
    return 0;
}
