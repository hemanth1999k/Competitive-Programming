
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
  int  n;
  cin>>n;
  vector<int> v(n,0);
  
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  
  int maxv = 1;
  for(int i=0;i<n-1;i++){
    
    // cout<<"st"<<endl;
    for(int k=i+1;k<n;k++){
      int count = 1;
      int lastind=i;
      int lastval = v[i];
      
      // for(int j=k;j<n;j++){
      int j=k;
      
        while(j<n){
      if( (j+1)%(lastind+1)==0){
        if(lastval<v[j]){
          // cout<<lastval<<" "<<v[j]<<endl;
          lastind = j;
          lastval = v[j];
          count++;
        }
      }
      j*=2;
        
      }
      if(count> maxv)
        maxv = count;
    }
      
    }
    
    
    cout<<maxv<<endl;
}
int main(){
  freopen("input.txt","r",stdin);

  int t;
  cin>>t;
  while(t--){
    solve();
    
  }
  
  return 0;
}
