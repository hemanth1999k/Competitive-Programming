#include<bits/stdc++.h>
using namespace std;
#define vint vector<int>
#define FOR(x,n) for(int i=x;i<n;i++)

int main(){
    int t;
    freopen("input.txt","r",stdin);
    cin>>t;
    
    while(t--){
       long long n;
      cin>>n; 
      for(long long i=2;i<100;i++){
        long long u = n*i;
//        cout<<(u/100)/i<<" "<<n<<endl;
        if( ((u/100)/i)*100 == n){
            cout<<n<<" "<<u<<" "<<i<<endl;
            break;
        }
      }

    }
}
