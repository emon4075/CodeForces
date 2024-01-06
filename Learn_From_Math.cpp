// https://codeforces.com/problemset/problem/472/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin>>N;
  if (N%2==0) {
    cout<<8<<" "<<N-8<<endl;
  }
  else{
    cout<<9<<" "<<N-9<<endl;
  }
  return 0;
}
