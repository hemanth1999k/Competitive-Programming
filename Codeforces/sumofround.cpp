#include <bits/stdc++.h>
using namespace std;
int main(){
  
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> rounds;
    int b;
    int deg = 0;
    while(n>0){
      b = n%10;
      if(b>0)
        rounds.push_back(b*pow(10,deg));
      n = n/10;
      deg++;
    }
    cout<<rounds.size()<<endl;
    for(auto &it:rounds){
      cout<<it<<" ";
    }
    cout<<endl;
  }
}
