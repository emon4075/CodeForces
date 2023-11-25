// https://codeforces.com/problemset/problem/1722/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i;
    cin >> t;
    while (t--)
    {
        int count_T = 0, Count_i = 0, Count_m = 0, Count_u = 0, Count_r = 0;
        cin >> n;
        string S;
        cin >> S;
        for (i = 0; i < S.length(); i++)
        {
            if (S[i] == 'T')
            {
                count_T++;
            }
            else if (S[i] == 'i')
            {
                Count_i++;
            }
            else if (S[i] == 'm')
            {
                Count_m++;
            }
            else if (S[i] == 'u')
            {
                Count_u++;
            }
            else if (S[i] == 'r')
            {
                Count_r++;
            }
        }
        if (count_T == 1 && Count_i == 1 && Count_m == 1 && Count_u == 1 && Count_r == 1 && S.length() == 5)
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
