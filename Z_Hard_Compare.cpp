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
    ll A, B, C, D;
    cin >> A >> B >> C >> D;
    if (log((double)pow(A, B)) > log((double)pow(C, D)))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}