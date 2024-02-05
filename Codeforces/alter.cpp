#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int maxlen(vector<ll> & a){
  int neg=0,pos=0;
  
  for(auto it= a.begin();it!=a.end();it++)
    if(*it > 0)
      pos++;
    else neg++;
  
  return min(pos,neg)*2;
}

ll maxval(vector<ll> &a, int start){
  bool pos;
  if(start>=a.size())
    return 0;
  if(a[start] <0)
    pos = false;
  else
    pos = true;
  
  int i=start+1;
  ll high = a[start];
  while(i<a.size()){
    if(pos && a[i] > 0){
      if(a[i]> high)
        high = a[i];
    }else if(!pos && a[i]<0){
      
      if(a[i]>high)
        high = a[i];
    }
    else
      break;
    i++;
  }
  return high + maxval(a,i);
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<ll> a(n,0);
    int k_size = 0;
    
    for(int i=0;i<n;i++)
      cin>>a[i];

    k_size = maxlen(a);
    cout<<maxval(a,0)<<endl;

  }
  
}
