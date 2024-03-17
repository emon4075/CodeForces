// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/T
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    string S, Word;
    cin >> S;
    S.replace(S.find("username="), 9, " ");
    S.replace(S.find("&pwd="), 5, " ");
    S.replace(S.find("&profile="), 9, " ");
    S.replace(S.find("&role="), 6, " ");
    S.replace(S.find("&key="), 5, " ");
    stringstream SS(S);
    while (SS >> Word)
    {
        count++;
        if (count == 1)
        {
            continue;
        }
        else if (count == 2)
        {
            cout << "username: " << Word << endl;
        }
        else if (count == 3)
        {
            cout << "pwd: " << Word << endl;
        }
        else if (count == 4)
        {
            cout << "profile: " << Word << endl;
        }
        else if (count == 5)
        {
            cout << "role: " << Word << endl;
        }
        else if (count == 6)
        {
            cout << "key: " << Word << endl;
        }
    }
    return 0;
}
