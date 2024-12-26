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
    int N;
    cin >> N;
    vector<int> V(N);
    int Count = 0;
    int Freq[5] = {0};
    for (int i = 0; i < N; i++)
    {
        cin >> V[i];
        Freq[V[i]]++;
    }
    Count += Freq[4];
    Count += Freq[3];
    Freq[1] = max(0, Freq[1] - Freq[3]);
    Count += Freq[2] / 2;
    Freq[2] = Freq[2] % 2;
    if (Freq[2])
    {
        Count++;
        Freq[1] = max(0, Freq[1] - 2);
    }
    Count += (Freq[1] + 3) / 4;
    cout << Count << endl;
    return 0;
}
