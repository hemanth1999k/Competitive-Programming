#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  //freopen("input.txt","r",stdin);
  int t;
  cin>>t;
  while(t--){
    string s;
    vector<vector<int> > positions;
    cin>>s;
    int start = -1;
    for(int i=1;i<s.size();i++){
      if(s[i]!=s[i-1]){
        vector<int> ex{i-1,s[i]-48+s[i-1]-48};
        
        positions.push_back(ex);
      }
    }
    if(positions.size()==0)
      cout<<0<<endl;
    else{
      int mini = 2*1e8;
      // cout<<"ops"<<positions.size()<<endl;
      for(int i=0;i<positions.size()-1;i++){
        vector<int> t1 = positions[i];
        for(int j=i+1;j<positions.size();j++){
          vector<int>t2 = positions[j];
          // cout<<t1[1]<<" "<<t2[1]<<endl;
          if(t1[1]!=t2[1]){
            mini = min(mini,(t2[0]+1)-t1[0]+1);
            if(mini == 3)
              break;
            break;
          }
        }
        if(mini == 3)
          break;
      }
      if(mini==2*1e8)
        cout<<0<<endl;
      else
        cout<<mini<<endl;
    }
  }
}
