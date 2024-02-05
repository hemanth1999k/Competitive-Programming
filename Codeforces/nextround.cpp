#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  string s;
  cin>>s;
  string k = "hello";
  int i=0;
  int j=0;
  while(j<s.length() && i<k.length()){
    if(s[j] == k[i])
      i++;
    
    j++;
  }
  if(i==k.length())
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;
  return 0;
}
