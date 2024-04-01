#include<bits/stdc++.h>
using namespace std;
int main(){
  int T;
  cin>>T;
  while (T--) {
    int X,Y,N;
    cin>>X>>Y>>N;
    int P=(N-Y)/X;
    cout<<(X*P)+Y<<endl;
  }
  return 0;
}
