#include<bits/stdc++.h>
using namespace std;
#define ll long long
int find_div(ll n){
  int div = 0;
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
      div = i;
      break;
    }
  }
    if(div == 0)
      return n;
    else return div;

}
void solve(){
  ll n,k;
  cin>>n>>k;
  ll t = find_div(n);
  ll count = 0;
  
  while(t!=2 && k>0){
    n += t;
    
    k--;
    t = find_div(n);
  }
  if(k>0 && t==2){
    n = n+ k*2;
  }
  cout<<n<<endl;
}
int main(){
  // freopen("input.txt","r",stdin);
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
