#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void FASTIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
int A, B, C;
bool check_A()
{
    int X = B - (C - B);
    return X > 0 && X % A == 0;
}
bool check_B()
{
    int X = (A + C);
    return X % 2 == 0 && (X / 2) % B == 0;
}
bool check_C()
{
    int X = B + (B - A);
    return X > 0 && X % C == 0;
}
int main()
{
    FASTIO();
    int T;
    cin >> T;
    while (T--)
    {
        cin >> A >> B >> C;
        if (check_A() || check_B() || check_C())
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
