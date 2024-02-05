#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  if(t==1 || t==2){
    cout<<"NO"<<endl;
    return 0;
}
  for(int i=2;i<=t-2;i+=2){
    if((t-i)%2==0 && i%2==0){
      cout<<"YES"<<endl;
      // cout<<t-i<<" "<<i<<endl;
      return 0;
        }
  }
  cout<<"NO"<<endl;
  return 0;
  
}
