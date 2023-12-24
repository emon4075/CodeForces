// https://codeforces.com/problemset/problem/427/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N,Sum=0,j=0;
  cin>>N;
  while (N--) {
    int X;
    cin>>X;
    if (X!=-1) {
      Sum+=X;
    }
    else {
      if (Sum>0) {
        Sum--;
      }
      else{
        j++;
      }
    }
  }
  cout<<j<<endl;
  return 0;
}
