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
        sort(All(V));
        for (auto it = V.begin(); it != V.end() - 1;) // Prevent out-of-bounds
        {
            int First = *it;
            int Second = *(it + 1);
            if (abs(First - Second) <= 1)
            {
                int Min = min(First, Second);
                if (Min == First)
                {
                    it = V.erase(it);
                }
                else
                {
                    it = V.erase(it + 1);
                }
            }
            else
            {
                it++;
            }
        }
        if (V.size() == 1)
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
