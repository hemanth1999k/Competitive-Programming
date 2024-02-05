#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<ll> rooms(n,0);
    for(int i=0;i<n;i++)
      cin>>rooms[i];
    vector<bool>assigned(n,false);
    bool morefils = false;
    for(int i=0;i<n;i++){
      int ak = rooms[i];
      int modvalue;
      modvalue = (ak+i)%n;
      if(modvalue<0)
        modvalue += n;
      
        if(assigned[modvalue]){
          cout<<"NO"<<endl;
          morefils = true;
          break;
      }
      else
        assigned[modvalue] = true;
    }
    if(!morefils)
      cout<<"YES"<<endl;
    
  }
  
}
