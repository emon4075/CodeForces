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
        int N;
        cin >> N;
        string S;
        cin >> S;
        ll Count_Minus = 0, Count_Dash = 0;
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == '-')
            {
                Count_Minus++;
            }
            else
            {
                Count_Dash++;
            }
        }
        ll Left_Minus = Count_Minus / 2;
        ll Right_Minus = Count_Minus - Left_Minus;
        ll Total = Left_Minus * Count_Dash * Right_Minus;
        cout << Total << endl;
    }
    return 0;
}