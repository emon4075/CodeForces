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
        int Track[26] = {0};
        int Count = 0;
        for (int i = 0; i < S.size(); i++)
        {
            char C = S[i];
            if (Track[C - 'a'] == 0)
            {
                Count = Count + S.size() - (i + 1);
                Track[C - 'a'] = 1;
                Count++;
            }
        }
        cout << Count << endl;
    }
    return 0;
}