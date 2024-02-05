#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isCorrect(vector<ll> a,vector<ll> b){
  int x = a[0] + b[0];
  for(int i=0;i<a.size();i++)
    if(a[i]+b[i]!=x)
      return false;
  return false;
}

int main(){

  freopen("input.txt","r",stdin);
  
  int t;
  
  cin>>t;
  
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<ll> a(n/2,0);
    vector<ll> b(n/2,0);
    map<int,int> hm;
    int k_size = 0;
    
    for(int i=0;i<n/2;i++){
      cin>>a[i];
      
    }
    
    for(int i=n/2-1;i>=0;i--)
      {
        cin>>b[i];
      }
    
    if(isCorrect(a,b)){
      cout<<0<<endl;
      continue;
    }
    int avg = 0;
    
    for(int i=0;i<n/2;i++)
      avg += (a[i] + b[i]);
    avg = avg/(n/2);
    int count = 0;
    cout<<"avg"<<avg<<endl;
    
    for(int i=0;i<n/2;i++)
      {
        if(a[i]+b[i] == avg)
          continue;
        int x1 = avg - a[i];
        int y1 = avg - b[i];
        if(x1 < 0 && y1 < 0)
          {
            count+=2;  
          }
        else if(x1>=0 || y1>=0)
          {
            count+=1;
          }
        else
          {
            count+=1;
          }
      }
    cout<<count<<endl;
    
  }
}
