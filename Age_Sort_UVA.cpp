// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2457
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
    while (1)
    {
        int N;
        cin >> N;
        if (N == 0)
        {
            return 0;
        }
        vector<int> V(N);
        for (int i = 0; i < N; i++)
        {
            cin >> V[i];
        }
        sort(All(V));
        for (int i = 0; i < V.size() - 1; i++)
        {
            cout << V[i] << " ";
        }
        cout << V[V.size() - 1] << endl;
    }
    return 0;
}