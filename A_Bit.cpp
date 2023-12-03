// https://codeforces.com/problemset/problem/282/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X = 0, N;
    cin >> N;
    while (N--)
    {
        string S;
        cin >> S;
        if (S == "++X")
        {
            ++X;
        }
        else if (S == "X++")
        {
            X++;
        }
        else if (S == "--X")
        {
            --X;
        }
        else
        {
            X--;
        }
    }
    cout << X << endl;
    return 0;
}