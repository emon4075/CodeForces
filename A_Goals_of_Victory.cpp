#include <bits/stdc++.h>
#define endl '\n'
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
        int n;
        cin >> n;
        int Sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int x;
            cin >> x;
            Sum += x;
        }
        cout << Sum * -1 << endl;
    }
    return 0;
}