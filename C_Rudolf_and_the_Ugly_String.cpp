#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void FASTIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    FASTIO();
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;
        int Count = 0;
        for (int i = 0; i < N - 2;)
        {
            string Sub = S.substr(i, 3);
            if (Sub == "pie" || Sub == "map")
            {
                Count++;
                i += 3;
            }
            else
            {
                i++;
            }
        }
        cout << Count << endl;
    }
    return 0;
}