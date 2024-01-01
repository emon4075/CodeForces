#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while (T--) {
    int N,IDX1,IDX2;
    cin>>N;
    int A[N];
    for (int i = 0; i < N; i++) {
      cin>>A[i];
    }
    for (int i = 0; i < N-1; i++) {
      if (A[i] != A[i+1]) {
        IDX1=i;
        IDX2=i+1;
        break;
      }
    }
    if (A[IDX1]==A[IDX1+2] || A[IDX1] == A[IDX1-1]) {
      cout<<IDX2+1<<endl;
    }
    else{
      cout<<IDX1+1<<endl;
    }
  }
  return 0;
}
