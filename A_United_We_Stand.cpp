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
        vector<int> B;
        vector<int> C;
        for (int i = 0; i < N; i++)
        {
            cin >> V[i];
        }
        int MAX = *max_element(All(V));
        for (int i = 0; i < N; i++)
        {
            if (MAX == V[i])
            {
                C.PB(MAX);
            }
            else
            {
                B.PB(V[i]);
            }
        }
        if (B.size() == 0 || C.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << B.size() << " " << C.size() << endl;
            for (auto i : B)
            {
                cout << i << " ";
            }
            cout << endl;
            for (auto i : C)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}