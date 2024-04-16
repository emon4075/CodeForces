#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[N][3];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
    }
    bool Flag = true;
    ll Sum = 0;
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < N; i++)
        {
            Sum += A[i][j];
        }
        if (Sum != 0)
        {
            Flag = false;
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

    return 0;
}