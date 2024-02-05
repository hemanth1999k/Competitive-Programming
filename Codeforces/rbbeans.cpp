#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    freopen("input.txt","r",stdin);

    cin>>t;
    while(t--){
        long long int r,b,d;
        cin>>r>>b>>d;
        if(abs(r-b) <= d)
            cout<<"YES"<<endl;
        else if(d==0)
           cout<<"NO"<<endl; 
        else{
            int g = 1+d;
            if(min(r,b)*(1+d) >= max(r,b))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

    }
}
