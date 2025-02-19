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
        for (int i = 0; i < N; i++)
        {
            cin >> V[i];
        }
        int Minus_Count = 0, Plus_Count = 0;
        for (int i = 0; i < N; i++)
        {
            if (V[i] == 1)
            {
                Plus_Count++;
            }
            else
            {
                Minus_Count++;
            }
        }
        int Operation = 0;
        while (Plus_Count < Minus_Count || Minus_Count % 2 == 1)
        {
            Plus_Count++;
            Minus_Count--;
            Operation++;
        }
        cout << Operation << endl;
    }
    return 0;
}