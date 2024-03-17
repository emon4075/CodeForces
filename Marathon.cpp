#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while (T--) {
    int A,B,C,D,Count=0;
    cin>>A>>B>>C>>D;
    if (A<B) {
      Count++;
    }
    if (A<C) {
      Count++;
    }
    if (A<D) {
      Count++;
    }
    cout<<Count<<endl;
  }
  return 0;
}
