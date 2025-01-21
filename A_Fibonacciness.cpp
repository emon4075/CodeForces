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
int Calculate_Fibo(int A, int B, int C, int D, int E)
{
    int Count = 0;
    if (A + B == C)
    {
        Count++;
    }
    if (B + C == D)
    {
        Count++;
    }
    if (C + D == E)
    {
        Count++;
    }
    return Count;
}

int main()
{
    FASTIO();
    int T;
    cin >> T;
    while (T--)
    {
        int A1, A2, A3, A4, A5;
        cin >> A1 >> A2 >> A4 >> A5;
        int Max = INT_MIN;

        for (int i = -100; i <= 100; i++)
        {
            A3 = i;
            Max = max(Max, Calculate_Fibo(A1, A2, A3, A4, A5));
        }
        cout << Max << endl;
    }
    return 0;
}