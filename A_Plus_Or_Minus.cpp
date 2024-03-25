#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while (T--) {
    int A,B,C;
    cin>>A>>B>>C;
    if (A+B==C) {
      cout<<'+'<<endl;
    }
    else {
      cout<<'-'<<endl;
    }
  }
  return 0;
}
