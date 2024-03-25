#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin>>N;
  int A[N];
  for (int i = 1; i <= N; i++) {
    cin>>A[i];
  }
  int pre1=0,pre2=0,pre11=0,pre22=0,ans=0;
  for (int i = 1; i <= N;) {
    while (A[i]==1 && i<=N) {
      pre1++;
      i++;
    }
    ans=max(ans,min(pre1,pre2));
    pre2=0;
    while (A[i]==2 && i<=N) {
      pre2++;
      i++;
    }
    ans=max(ans,min(pre2,pre1));
    pre1=0;
  }
  cout<<ans*2<<endl;
  return 0;
}
