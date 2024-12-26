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
        ll N;
        cin >> N;
        while (true)
        {
            bool Flag = true;
            ll CP = N;
            while (CP > 0)
            {
                ll digit = CP % 10;
                CP /= 10;
                if (digit > 0 && N % digit != 0)
                {
                    Flag = false;
                    break;
                }
            }
            if (Flag)
            {
                cout << N << endl;
                break;
            }
            else
            {
                N++;
            }
        }
    }
    return 0;
}
