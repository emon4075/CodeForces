#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void FASTIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    FASTIO();
    ll N, D;
    cin >> N >> D;
    deque<ll> DQ(N);
    for (int i = 0; i < N; i++)
    {
        cin >> DQ[i];
    }
    sort(DQ.begin(), DQ.end());
    int Count = 0;
    while (!DQ.empty())
    {
        ll Captain = DQ.back();
        DQ.pop_back();
        int Steps = 1;

        while (Captain * Steps <= D)
        {
            Steps++;
        }
        if (Steps > DQ.size() + 1)
        {
            break;
        }
        Count++;
        for (int i = 1; i < Steps; i++)
        {
            DQ.pop_front();
        }
    }
    cout << Count << endl;
    return 0;
}
