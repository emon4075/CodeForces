#include<bits/stdc++.h>
using namespace std;
int main()
{
  int N;
  cin>>N;
  list<string> V,CPY;
  for (int i = 0; i < N; i++) {
    string S;
    cin>>S;
    V.push_back(S);
  }
  CPY=V;
  V.sort();
  V.unique();
  string Team_1=V.front();
  string Team_2=V.back();
  int Team_A=0,Team_B=0;
  for(string S:CPY)
  {
    if (Team_1==S) {
      Team_A++;
    }
    else{
      Team_B++;
    }
  }
  if (Team_A>Team_B) {
    cout<<Team_1<<endl;
  }
  else{
    cout<<Team_2<<endl;
  }
  return 0;
}
