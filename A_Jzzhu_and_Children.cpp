#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M, Position;
    cin >> N >> M;
    vector<int> V;
    for (int i = 0; i < N; i++)
    {
        int X;
        cin >> X;
        int Tempo = ceil((X * 1.0) / M);
        V.push_back(Tempo);
    }
    int Value = *max_element(V.begin(), V.end());
    for (auto i = 0; i < N; i++)
    {
        if (V[i] == Value)
        {
            Position = i + 1;
        }
    }
    cout << Position << endl;
    return 0;
}