#include <bits/stdc++.h>
using namespace std;
int main(){
  // freopen("input.txt","r",stdin);
  int t;
  cin>>t;
  while(t--){
    int n,moves=0,a,b,prev=0;
    int tota=0,totb = 0;
    cin>>n;
    vector<int> rounds(n,0);
    for(int i=0;i<n;i++)
      cin>>rounds[i];
    int aind =0;
    int bind = n-1;
    while(aind<=bind){
      int suma = 0,sumb = 0;
      bool mova = false,movb = false;
      
      while(suma <= prev && aind<=bind && aind<rounds.size()){
        // cout<<rounds[aind]<<" ";
        suma+= rounds[aind];
        aind++;
        mova = true;
      }
      // cout<<endl;
      
      if(mova){
        moves++;
        prev = suma;
        tota+= suma;
      }
      
      while(sumb <= prev && aind <= bind && bind>=0){
        sumb+= rounds[bind];
        bind--;
        movb = true;
      }
      // cout<<suma<<" "<<sumb<<endl;
      if(movb){
        moves++;
      prev = sumb;
      totb+=sumb;
      }
    }
    cout<<moves<<" "<<tota<<" "<<totb<<endl;
  }
}
