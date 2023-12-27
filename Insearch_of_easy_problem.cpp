// https://codeforces.com/problemset/problem/1030/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin>>N;
  int A[N],count=0;
  for (int i = 0; i < N; i++) {
    cin>>A[i];
    if (A[i]==1) {
      count++;
    }
  }
  if (count==0) {
    cout<<"EASY"<<endl;
  }
  else{
    cout<<"HARD"<<endl;
  }
  return 0;
}
