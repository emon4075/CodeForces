#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int Advance_Index = k - 1;
    int Advance_Value = A[Advance_Index];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] >= Advance_Value && A[i] > 0)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
    return 0;
}