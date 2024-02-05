#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    
    cin>>n;
    vector<int> a;
    
    int sum = 0;
    for(int i=0;i<n/2;i+=1){
      a.push_back(2*i+2);
      sum+= 2*i+2;
    }
    // cout<<"Sum: "<<sum<<endl;   
    for(int j=0;j<n/2;j+=1){
      int red=0;
      if(j+1<n/2){
        sum-= 2*j+1;
        red = 2*j+1;
      }
      else if(sum%2==1){
        red = sum;
        sum = 0;
      }
    a.push_back(red);
    } 
    if(sum==0){
      cout<<"YES"<<endl;
      for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    }
    else{
      cout<<"NO"<<endl;
      // for(int i=0;i<a.size();i++)
      //   cout<<a[i]<<" ";
      
    }
    }
  return 0;
    }
