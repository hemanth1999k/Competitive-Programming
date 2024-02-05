#include <bits/stdc++.h>
using namespace std;
int main(){
  // freopen("input.txt","r",stdin);
  int t;
  cin>>t;
  
  while(t--){
    int n;
    cin>>n;
    vector<int> rounds(n,0);
    map<int,int> elms;
    set<int> spe;
    vector<int> prefix(1,0);
    int res = 0;
    int max = 0;
    
    for(int i=0;i<n;i++){
      cin>>rounds[i];
      prefix.push_back(rounds[i]+prefix[i]);
      if(max<rounds[i])
        max = rounds[i];
      auto it = elms.find(rounds[i]);
      if(it!=elms.end()){
        it->second++;
      }else{
        elms.insert(pair<int,int>(rounds[i],1));
      }
    }
    
    bool breakit = false;
    for(int s=2;s<=n;s++){
      for(int i=s;i<=n;i++){
        int q = prefix[i] -  prefix[i-s];
        auto it = elms.find(q);
        if(it!=elms.end()){
          // cout<<q<<endl;
          spe.insert(q);
        }
      }
    }
   
    for(auto &it:spe){
      auto j = elms.find(it);
      
      res += j->second;
    }
    cout<<res<<endl;
  }
}
