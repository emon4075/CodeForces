#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, F, K;
        cin >> N >> F >> K;
        bool Removed = false;
        bool Rest = false;
        vector<int> V(N);
        for (int i = 0; i < N; i++)
        {
            cin >> V[i];
        }
        int Fav_Index = F - 1;
        int Fav_Cube = V[Fav_Index];
        sort(V.begin(), V.end(), greater<>());
        for (int i = 0; i < K; i++)
        {
            if (V[i] == Fav_Cube)
            {
                Removed = true;
                break;
            }
        }
        for (int i = K; i < N; i++)
        {
            if (V[i] == Fav_Cube)
            {
                Rest = true;
                break;
            }
        }
        if (Removed && Rest)
        {
            cout << "MAYBE" << endl;
        }
        else if (Removed && !Rest)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
