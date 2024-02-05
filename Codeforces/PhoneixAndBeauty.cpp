#include<bits/stdc++.h>
using namespace std;

int main(){
  // freopen("input.txt","r",stdin);
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    vector<int> x(n+1);
    set<int> s;
    for(int i=0;i<n;i++)
    {
      int c;
      cin>>c;
      s.insert(c);
    }
    if(s.size()>k){
      cout<<-1<<endl;
      continue;
    }
    cout<<n*k<<endl;
    for(int i=0;i<n;i++){
      for(auto b:s)
        cout<<b<<" ";
      for(int j=0;j<k-s.size();j++)
        cout<<1<<" ";
    }
    cout<<endl;
  }
  
}
