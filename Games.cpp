// https://codeforces.com/problemset/problem/268/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin>>N;
  int H[N],A[N];
  for (int i = 0; i < N; i++) {
    cin>>H[i]>>A[i];
  }
  int count=0;
  for (int i = 0; i < N-1; i++) {
    for (int j = i+1; j < N; j++) {
      if (H[i]==A[j]) {
        count++;
      }
      if (A[i] == H[j]) {
        count++;
      }
    }
  }
  cout<<count<<endl;
  return 0;
}
