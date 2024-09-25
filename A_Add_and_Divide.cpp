#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void FASTIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
int Func(int A, int B)
{
    int Operations = 0, Min_Operations = INT_MAX;
    bool is_Increased = false;
    if (B == 1)
    {
        B += 1;
        is_Increased = true;
    }
    for (int i = 0; i < 35; i++)
    {
        int Temp_A = A;
        int new_B = B + i;
        Operations = i;
        while (Temp_A > 0)
        {
            Temp_A /= new_B;
            Operations++;
        }
        Min_Operations = min(Operations, Min_Operations);
    }
    if (is_Increased)
    {
        return Min_Operations + 1;
    }
    else
    {
        return Min_Operations;
    }
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
        cout << Func(A, B) << endl;
    }
    return 0;
}