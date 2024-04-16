#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    bool bl = true;
    ll S, N, X, Y;
    cin >> S >> N;
    vector<pair<ll, ll>> V;
    while (N--)
    {
        cin >> X >> Y;
        V.push_back(make_pair(X, Y));
    }
    sort(V.begin(), V.end());
    for (auto PR : V)
    {
        if (S > PR.first)
        {
            S += PR.second;
        }
        else
        {
            bl = false;
        }
    }
    if (bl)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}