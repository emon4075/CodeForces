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
    int N;
    cin >> N;
    vector<int> V(N);
    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
    }
    sort(All(V));
    V.erase(unique(V.begin(), V.end()), V.end());
    int Count = 0;
    for (int i = 0; i < V.size(); i++)
    {
        if (V[i] > 0)
        {
            Count++;
        }
    }
    cout << Count << endl;
    return 0;
}