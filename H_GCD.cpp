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
    ll A, B;
    cin >> A >> B;
    ll GCD = __gcd(A, B);
    ll LCM = (A / GCD) * B;
    cout << GCD << " " << LCM << endl;
    return 0;
}