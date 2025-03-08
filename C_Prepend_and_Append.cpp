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
        int i = 0, j = N - 1;
        int Count = 0;
        while (i < j)
        {
            if (S[i] != S[j])
            {
                Count += 2;
                i++;
                j--;
            }
            else
            {
                break;
            }
        }
        cout << N - Count << endl;
    }
    return 0;
}