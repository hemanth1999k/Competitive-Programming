#pragma optimize("O3")
#include<bits/stdc++.h>
using namespace std;
#define ll long long

map<int,map<int,int> > stored;
int lcm(int a,int b){
  int k;
  if(a>b) k = a;
  else k = b;
  while(true){
    if(k%a==0 && k%b==0)
      break;
    k++;
  }
  return k;
}
int gcd(int x,int y){
  if(x==0)
    return y;
  auto rr = stored.find(x);
  int found = -1;
  bool firstfound = false;
  if(rr!=stored.end()){
    firstfound = true;
    // cout<<"first"<<endl;
    auto xx = rr->second.find(y);
    if(xx!=rr->second.end()){
      found =  xx->second;
      
    }
  }
  if(found!=-1)
    return found;
  
   ll j = gcd(y%x,x);
   if(firstfound){
     rr->second.insert(pair<int,int>(y,j));
   }else{
     map<int,int>u;
     u.insert(pair<int,int>(y,j));
     stored.insert(pair<int,map<int,int> >(x,u));
   }
   return j;
}
int findGCD(vector<int>& arr) 
{ 
  int result = arr[0]; 
  for (int i = 1; i < arr.size(); i++) 
    { 
      result = gcd(arr[i], result); 
      if(result == 1) 
          return 1; 
        
    }
 
  return result; 
} 
void solve(){
  ll n,k;
  cin>>n;
  vector<int> v(n,0);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  set<int> g;
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++)
      g.insert(lcm(v[i],v[j]));
  }
  vector<int> q(g.begin(),g.end());
  
  cout<<findGCD(q)<<endl;
  // for(auto x:stored)
  //   for(auto y:x.second)
      // cout<<x.first<<" "<<y.first<<" "<<y.second<<endl;
  
  
}
int main(){
  // freopen("input.txt","r",stdin);
  
    solve();
  
  return 0;
}
