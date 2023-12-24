// https://codeforces.com/problemset/problem/707/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,count=0;
  cin>>n>>m;
  char A[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin>>A[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (A[i][j]!='W'&& A[i][j]!='B' && A[i][j]!='G') {
        count=1;
        break;
      }
    }
  }
  if (count==0) {
    cout<<"#Black&White"<<endl;
  }
  else{
    cout<<"#Color"<<endl;
  }
  return 0;
}
