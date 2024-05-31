#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int Min, Mid, Max;
        cin >> Min >> Mid >> Max;
        if ((Min + Mid + Max) % 2 == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            int Count = 0;
            while (1)
            {
                if (Min != 0 && Max != 0)
                {
                    Count++;
                    Min--;
                    Max--;
                }
                if (Min != 0 && Mid != 0)
                {
                    Count++;
                    Min--;
                    Mid--;
                }
                if (Mid != 0 && Max != 0)
                {
                    Count++;
                    Mid--;
                    Max--;
                }
                if ((Min == 0 && Mid == 0) || (Min == 0 && Max == 0) || (Mid == 0 && Max == 0))
                {
                    break;
                }
            }
            cout << Count << endl;
        }
    }
    return 0;
}