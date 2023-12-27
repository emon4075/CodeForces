// https://codeforces.com/problemset/problem/1551/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while (T--) {
    int N,C1,C2;
    cin>>N;
    C1=floor(N/3);
    C2=C1;
    if (N%3==1) {
      C1+=1;
    }
    else if (N%3==2) {
      C2+=1;
    }
    cout<<C1<<" "<<C2<<endl;
  }
  return 0;
}
