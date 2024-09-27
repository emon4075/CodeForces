#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void FASTIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
const int MX = 1e8 + 5;
bitset<MX> is_Perfect_Square;
void generate_Perfect_Square(int X)
{
    for (int i = 0; i <= X; i++)
    {
        is_Perfect_Square[i * i] = true;
    }
}
int main()
{
    FASTIO();
    int N;
    cin >> N;
    int Count = 0;
    generate_Perfect_Square(N);
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j++)
        {
            int CSQ = (i * i) + (j * j);
            if (CSQ <= N*N && is_Perfect_Square[CSQ])
            {
                Count++;
            }
        }
    }
    cout << Count << endl;
    return 0;
}