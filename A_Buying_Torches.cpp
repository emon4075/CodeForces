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
        ll X, Y, K;
        cin >> X >> Y >> K;
        ll Stick_Coal = (Y * K);
        ll Total_Coal = X + Stick_Coal;
        ll Steps_Coal = Stick_Coal / Y;
        ll Steps_Stick = 0;
        ll i = 1;
        while (1)
        {
            if (i >= Total_Coal)
            {
                break;
            }
            Steps_Stick++;
            i += (X - 1);
        }
        cout << Steps_Stick + Steps_Coal << endl;
    }
    return 0;
}