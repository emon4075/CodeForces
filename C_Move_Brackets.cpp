#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
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
        stack<char> ST;
        int N;
        cin >> N;
        string S;
        cin >> S;
        int Count = 0;
        for (int i = 0; i < N; i++)
        {
            if (S[i] == '(')
            {
                ST.push(S[i]);
            }
            else if (S[i] == ')' && !ST.empty())
            {
                ST.pop();
            }
            else
            {
                Count++;
            }
        }
        cout << Count << endl;
    }
    return 0;
}