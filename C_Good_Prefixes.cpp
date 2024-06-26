#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll N;
        cin >> N;
        ll V[N];
        ll Sum = 0;
        ll Count = 0;
        ll MX = 0;
        for (ll i = 0; i < N; i++)
        {
            cin >> V[i];
        }
        for (int i = 0; i < N; i++)
        {
            Sum += V[i];
            MX = max(MX, V[i]);
            if (MX == Sum - MX)
            {
                Count++;
            }
        }
        cout << Count << endl;
    }
    return 0;
}
