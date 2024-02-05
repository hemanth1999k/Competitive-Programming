#include<bits/stdc++.h>
using namespace std;

class Solution{

public:
  void run(){
    int n,x;
    cin>>n>>x;
    vector<int> ds(n);
    int max=0;
    int maxi = -1;
    for(int i=0;i<n;i++){
      cin>>ds[i];
      if(max<ds[i]){
        max = ds[i];
        maxi = i;
      }
    }
  }
  
};
int main(){
  
}
