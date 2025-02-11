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
    int Sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
        Sum += V[i];
    }
    int Need = Sum / 2 + 1;
    sort(All(V));
    int Count = 0, Current = 0;
    for (int i = N - 1; i >= 0; i--)
    {
        Current += V[i];
        Count++;
        if (Current >= Need)
        {
            break;
        }
    }

    cout << Count << endl;
    return 0;
}
