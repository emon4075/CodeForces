#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while (T--) {
    int N,Count=0;
    cin>>N;
    for (int i = 0; i <N; i++) {
      int X;
      cin>>X;
      if (X%2==1) {
        Count++;
      }
    }
    if (Count%2==0) {
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
