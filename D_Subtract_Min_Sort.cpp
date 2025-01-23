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
        int N, X;
        cin >> N;
        deque<int> DQ(N);
        for (int i = 0; i < N; i++)
        {
            cin >> X;
            DQ.push_back(X);
        }
        bool isValid = true;
        while (DQ.size() > 1)
        {
            if (DQ[0] > DQ[1])
            {
                isValid = false;
                break;
            }
            else if (DQ[0] < DQ[1])
            {
                DQ[1] -= DQ[0];
                DQ.pop_front();
            }
            else
            {
                DQ.pop_front();
                DQ.pop_front();
            }
        }
        cout << (isValid ? "YES" : "NO") << endl;
    }
    return 0;
}