// https://codeforces.com/contest/1919/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while (T--) {
    int A,B;
    cin>>A>>B;
    if ((A+B) %2 ==1) {
      cout<<"Alice"<<endl;
    }
    else{
      cout<<"Bob"<<endl;
    }
  }
  return 0;
}
