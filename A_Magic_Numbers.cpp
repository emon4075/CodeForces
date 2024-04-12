#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    bool Flag = false;
    for (int i = 0; i < S.size();)
    {
        if (S[i] == '1' && S[i + 1] == '4' && S[i + 2] == '4')
        {
            Flag = true;
            i += 3;
        }
        else if (S[i] == '1' && S[i + 1] == '4')
        {
            Flag = true;
            i += 2;
        }
        else if (S[i] == '1')
        {
            Flag = true;
            i++;
        }
        else
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