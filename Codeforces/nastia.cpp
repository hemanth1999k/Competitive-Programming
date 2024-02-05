#include<bits/stdc++.h>
using namespace std;

int main(){
    
    freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        if(b == 1){
            cout<<"NO"<<endl;
            continue;
        }
        long long int z = a*b;
        int x = a;
        cout<<"YES"<<endl;
        cout<<x<<" "<<a*b<<" "<<a+a*b<<endl;
    }
    return 0;
}
