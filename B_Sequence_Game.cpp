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
        vector<int> V(N);
        vector<int> Result;
        for (int i = 0; i < N; i++)
        {
            cin >> V[i];
        }
        Result.push_back(V[0]);
        for (int i = 1; i < N; i++)
        {
            if (V[i] < V[i - 1])
            {
                Result.push_back(V[i]);
            }
            Result.push_back(V[i]);
        }
        cout << Result.size() << endl;
        for (auto i : Result)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}