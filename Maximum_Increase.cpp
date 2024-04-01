#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N,Count=1,Maxi=1;
  cin>>N;
  int A[N];
  for (int i = 0; i < N; i++) {
    cin>>A[i];
  }
  for (int i = 0; i < N-1; i++) {
    if (A[i]<A[i+1]) {
      ++Count;
      Maxi=max(Maxi,Count);
    }
    else{
      Count=1;
    }
  }
  if (!Maxi) {
    cout<<1<<endl;
  }
  else{
    cout<<Maxi<<endl;
  }
  return 0;
}
