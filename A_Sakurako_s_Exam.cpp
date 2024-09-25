#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void FASTIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
bool is_Possible(int A, int B)
{
    if (A == 0 && (B % 2 == 0))
    {
        return true;
    }
    if (B == 0 && (A % 2 == 0))
    {
        return true;
    }
    if (A % 2 == 0 && A > 0)
    {
        return true;
    }
    return false;
}
int main()
{
    FASTIO();
    int T;
    cin >> T;
    while (T--)
    {
        int A, B;
        cin >> A >> B;
        if (is_Possible(A, B))
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