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
        int N, M;
        cin >> N >> M;
        int Sum = 0;
        int Neg_Count = 0;
        int Range = N * M;
        vector<int> V(Range);
        for (int i = 0; i < Range; i++)
        {
            cin >> V[i];
            Sum += abs(V[i]);
            if (V[i] < 0)
            {
                Neg_Count++;
            }
            V[i] = abs(V[i]);
        }
        if (Neg_Count % 2 == 0)
        {
            cout << Sum << endl;
        }
        else
        {
            int Mini = *min_element(V.begin(), V.end());
            cout << Sum - (2 * abs(Mini)) << endl;
        }
    }
    return 0;
}