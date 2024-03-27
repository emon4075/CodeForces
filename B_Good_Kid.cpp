#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while (T--) {
    int N;
    cin>>N;
    int A[N];
    for (int i = 0; i < N; i++) {
      cin>>A[i];
    }
    long long int Prod=1;
    int MINI=*min_element(A,A+N);
    int *Add=min_element(A,A+N);
    for (int i = 0; i < N; i++) {
      if (&A[i]==Add) {
        continue;
      }
      else{
        Prod*=A[i];
      }
    }
    cout<<Prod*(MINI+1)<<endl;
  }
  return 0;
}
