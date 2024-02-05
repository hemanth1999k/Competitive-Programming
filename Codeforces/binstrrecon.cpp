#include <bits/stdc++.h>
using namespace std;
int main()
{
  // freopen("input.txt","r",stdin);
  int t;
  cin>>t;
  while(t--){
    int n,k,l;
    cin>>n>>k>>l;
    if(k==0){
      int j;
      int a;
      if(n>0){j=n;a=0;}
      else{ j=l;a=1;}
      
      for(int i=0;i<j+1;i++)
        cout<<a;
      cout<<endl;
    }
    else{
      string str;
      for(int i=0;i<l;i++)
        str+="1";
      str+="1";
      for(int i=0;i<n;i++)
        str+="0";
      
        str+="0";
      for(int i=0;i<k-1;i++){
        if(i%2==0)
          str+="1";
        else
          str+="0";
      }
      cout<<str<<endl;
    }
  }
}
