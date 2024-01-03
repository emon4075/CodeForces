// https://codeforces.com/problemset/problem/266/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  char S[n];
  cin>>S;
  int count=0;
  for (int i = 0; S[i] != '\0'; i++) {
    if (S[i]==S[i+1]) {
      count++;
    }
  }
  cout<<count<<endl;
  return 0;
}
