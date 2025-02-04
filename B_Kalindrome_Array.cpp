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

bool checkPalindrome(auto V, int X)
{
    int i = 0, j = V.size() - 1;
    while (i < j)
    {
        if (V[i] == X)
        {
            i++;
        }
        else if (V[j] == X)
        {
            j--;
        }
        else if (V[i] != V[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
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
        bool Flag = true;
        for (int i = 0; i < N - 1 - i; i++)
        {
            if (V[i] != V[N - 1 - i])
            {
                Flag = (checkPalindrome(V, V[i]) || checkPalindrome(V, V[N - 1 - i]));
                break;
            }
        }
        if (Flag)
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