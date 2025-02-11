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
    vector<int> Freq(1005, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
        Freq[V[i]]++;
    }
    sort(All(V));
    V.erase(unique(V.begin(), V.end()), V.end());
    cout << *max_element(Freq.begin(), Freq.end()) << " " << V.size() << endl;
    return 0;
}