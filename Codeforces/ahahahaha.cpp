#include<bits/stdc++.h>
using namespace std;
int main() {
    // freopen("input.txt","r",stdin);
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        // int arr[n];
        // memset(arr,0,sizeof arr);
        int ones =0,zeros=0,x;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x)ones++;
            else zeros++;
        }
        // cout<<"a "<<ones<<" "<<zeros<<endl;
        if(ones <= n/2){
            cout<<zeros<<endl;
            for(int i=0;i<zeros;i++){
                cout<<0<<" ";
            }
            cout<<endl;
        }else{
            x = ones%2;
            cout<<ones-x<<endl;
            for(int i=0;i<ones-x;i++)
                cout<<1<<" ";
            cout<<endl;
        }
        
    }
}