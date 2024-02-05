#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  freopen("input.txt","r",stdin);
  int t;
  cin>>t;
  while(t--){
    string s;
    vector<vector<int> > positions;
    cin>>s;
    int a=-1,b=-1,c=-1;
    int mini = 1e9;
    bool found3 = false;
    for(int i=0;i<s.size();i++){
      if(s[i]-48 == 1)
        a = i;
      else if(s[i]-48 == 2)
        b = i;
      else
        c = i;
      if(a==-1 || b==-1 || c==-1)
        continue;
      else{
        found3 = true;
        int first = min(a,min(b,c));
        int last = max(a,max(b,c));
        mini = min(mini,last-first+1);
      }
    }
    if(found3){
      cout<<mini<<endl;
    }
    else cout<<0<<endl;
  }
}
