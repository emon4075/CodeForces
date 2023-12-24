// https://codeforces.com/problemset/problem/1176/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int q;
  cin>>q;
  while (q--) {
    long long int n;
    cin>>n;
    int count=0;
    while (1) {
      if (n==1) {
        break;
      }
      if (n%5==0) {
        n=(4*n)/5;
        count++;
      }
      else if (n%3==0) {
        n=(2*n)/3;
        count++;
      }
      else if (n%2==0) {
        n=n/2;
        count++;
      }
      else{
        count=-1;
        break;
      }
    }
    if (count==-1) {
      cout<<-1<<endl;
    }
    else{
      cout<<count<<endl;
    }
  }
  return 0;
}
