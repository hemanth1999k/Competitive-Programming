#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

  int t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    ll within = n-1;
    ll z = k/(n-1);
    ll num = z*(n-1) + (z-1);
    ll nondivi = z*(n-1);
    if(nondivi == k){
      cout<<num<<endl;
      continue;
    }
    // cout<<num<<" "<<nondivi<<endl;
    num+=2;
    nondivi+=1;
    
    // while(nondivi < k){
    //   num++;
    //   nondivi++;
    // }
    cout<<num+(k-nondivi)<<endl;
  }
}

