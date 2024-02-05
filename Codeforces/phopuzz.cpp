#include<bits/stdc++.h>
using namespace std;
#define vint vector<int>
#define FOR(x,n) for(int i=x;i<n;i++)

int main(){
    int t;
    freopen("input.txt","r",stdin);
    cin>>t;
    bool b= false;
    if(t>4)
        b = true;
    while(t--){
        int n,m,k;
        cin>>n;
        if(b)
            cout<<n<<endl; 
        if( n%2==0){
            int x = n/2;
            if(sqrt(x)*sqrt(x) == x){
                cout<<"YES"<<endl;
                continue;
            }
        }
        if(n%4 == 0){
             int x = n/4;
             if(sqrt(x)*sqrt(x) == x){
                 cout<<"YES"<<endl;
                 continue;
             }
        }
        cout<<"NO"<<endl;
    }

}

