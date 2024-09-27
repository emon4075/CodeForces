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
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        if (i % 4 == 0 || i % 4 == 1)
        {
            cout << 'a';
        }
        if (i % 4 == 2 || i % 4 == 3)
        {
            cout << 'b';
        }
    }

    return 0;
}