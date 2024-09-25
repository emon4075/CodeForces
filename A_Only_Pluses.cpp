#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void FASTIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
int Result(int X, int Y, int Z)
{
    return X * Y * Z;
}
int main()
{
    FASTIO();
    int T;
    cin >> T;
    while (T--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        int Max_Product = INT32_MIN;
        for (int i = 0; i <= 5; i++)
        {
            for (int j = 0; j <= 5 - i; j++)
            {
                int k = 5 - (i + j);
                int Increased_A = A + i;
                int Increased_B = B + j;
                int Increased_C = C + k;
                Max_Product = max(Max_Product, Result(Increased_A, Increased_B, Increased_C));
            }
        }
        cout << Max_Product << endl;
    }
    return 0;
}