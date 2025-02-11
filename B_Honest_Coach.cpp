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
        vector<int> V(N);
        vector<int> ANS;
        for (int i = 0; i < N; i++)
        {
            cin >> V[i];
        }
        sort(All(V));
        for (int i = 1; i < N; i++)
        {
            ANS.push_back(V[i] - V[i - 1]);
        }
        cout << *min_element(ANS.begin(), ANS.end()) << endl;
    }
    return 0;
}