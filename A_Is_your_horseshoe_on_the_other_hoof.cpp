// https://codeforces.com/problemset/problem/228/A
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> A[i];
    }
    int temp_count = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = i + 1; j < 4; j++)
        {
            if (A[i] == A[j])
            {
                count++;
            }
        }
        if (count > temp_count)
        {
            temp_count = count;
        }
        else if (count == temp_count)
        {
            temp_count = count + temp_count;
        }
    }
    cout << temp_count << endl;
    return 0;
}