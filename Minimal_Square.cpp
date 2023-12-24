// https://codeforces.com/problemset/problem/1360/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T,a,b,mini,maxi;
  cin>>T;
  while (T--) {
    cin>>a>>b;
    mini=2*min(a,b);
    maxi=max(mini,max(a,b));
    cout<<maxi*maxi<<endl;
  }
  return 0;
}
