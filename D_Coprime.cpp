#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
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
        map<int, int> M;
        for (int i = 0; i < N; i++)
        {
            cin >> V[i];
            M[V[i]] = i + 1;
        }
        int MX = -1;
        for (auto i = M.begin(); i != M.end(); i++)
        {
            for (auto j = M.begin(); j != M.end(); j++)
            {
                if (__gcd(i->first, j->first) == 1)
                {
                    MX = max(MX, i->second + j->second);
                }
            }
        }
        cout << MX << endl;
    }
    return 0;
}
