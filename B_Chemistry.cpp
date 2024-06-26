#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        string S;
        cin >> S;
        int A[26] = {0};
        for (char ST : S)
        {
            A[ST - 'a']++;
        }
        int Count = 0;
        for (int i = 0; i < 26; i++)
        {
            if (A[i] % 2 == 1)
            {
                Count++;
            }
        }
        if ((Count - 1) > K)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
