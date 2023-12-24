// https://codeforces.com/problemset/problem/1535/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while (T--) {
    int A[4],CPY[4];
    int M1,M2,count=0;
    for (int i = 0; i < 4; i++) {
      cin>>A[i];
      CPY[i]=A[i];
    }
    sort(CPY,CPY+4,greater<int>());
    M1=max(A[0],A[1]);
    M2=max(A[2],A[3]);
    if ((M1==CPY[0] || M1==CPY[1]) && (M2==CPY[0]||M2==CPY[1])){
      count=1;
    }
    if (count==1) {
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
