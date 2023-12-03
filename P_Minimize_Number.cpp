// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int Res = 0;
    while (1)
    {
        int Count = 0;
        for (int i = 0; i < N; i++)
        {
            if (A[i] % 2 == 0)
            {
                A[i] = A[i] / 2;
                Count++;
            }
            else
            {
                break;
            }
        }
        if (Count == N)
        {
            Res++;
        }
        else
        {
            break;
        }
    }
    cout << Res << endl;
    return 0;
}