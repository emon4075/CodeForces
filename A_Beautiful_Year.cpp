// https://codeforces.com/problemset/problem/271/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Y, Copy;
    cin >> Y;
    Y = Y + 1;
    int count[4];
    while (1)
    {
        Copy = Y;
        int i = 0, Flag = 0;
        while (Copy != 0)
        {
            count[i] = Copy % 10;
            Copy = Copy / 10;
            i++;
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (count[i] == count[j])
                {
                    Flag = 1;
                }
            }
        }
        if (Flag == 0)
        {
            cout << Y << endl;
            break;
        }
        else
        {
            Y++;
        }
    }

    return 0;
}