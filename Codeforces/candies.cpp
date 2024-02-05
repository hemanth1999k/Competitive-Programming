#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int t;
  vector<int> sums{3};
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int i=0;
    while(n%sums[i]!=0){
      i++;
      if(i==sums.size()){
        sums.push_back(sums[i-1]+ pow(2,i+1));
        
      }
     
    }
    cout<<n/sums[i]<<endl;
    
  }
  
}
