
#include <iostream>
#include<cmath>
#include<vector>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t-->0){
    int n;
    cin>>n;
    int half = n/2;
    vector<int> arr(n);
    int sum1 = (int)pow(2,n);
    int sum2 = 0;
    
    for(int i=1;i<=half-1;i++){
      sum1+= (int)pow(2,i);
      sum2+= (int)pow(2,i+half-1);
    }
    sum2+= (int)pow(2,n-1);
    cout<<abs(sum2-sum1)<<endl;
    
  }
  return 0; 
}
