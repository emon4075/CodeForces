#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int Zero_Counter = 0, One_Counter = 0;
        for (char c : s)
        {
            if (c == '0')
            {
                Zero_Counter++;
            }
            else if (c == '1')
            {
                One_Counter++;
            }
        }
        if (min(Zero_Counter, One_Counter) % 2 == 1)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NET" << endl;
        }
    }

    return 0;
}
