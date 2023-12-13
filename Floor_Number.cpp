// https://codeforces.com/problemset/problem/1426/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--) {
    int n,x;
    cin>>n>>x;
    if (n==1 || n==2) {
      cout<<1<<endl;
    }
    else{
    cout<<floor((n-3)/x)+2<<endl;
    }
  }
  return 0;
}
