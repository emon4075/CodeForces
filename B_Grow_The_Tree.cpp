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
    sort(All(V), greater<>());
    int i = 0, j = V.size() - 1;
    ll New_X = 0, New_Y = 0; 
    while (i < j)
    {
        New_X += V[i];
        i++;
        New_Y += V[j];
        j--;
    }
    if (N % 2 == 1)
    {
        New_X += V[i];
    }
    ll X = New_X, Y = New_Y;
    ll Result = (X * X) + (Y * Y);
    cout << Result << endl;
    return 0;
}
