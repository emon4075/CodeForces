#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        string S, Real = "meow";
        cin >> S;
        transform(S.begin(), S.end(), S.begin(), ::tolower);
        S.erase(unique(S.begin(), S.end()), S.end());
        if (S == Real)
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