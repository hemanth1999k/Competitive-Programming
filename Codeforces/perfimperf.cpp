#include<bits/stdc++.h>
using namespace std;
#define vint vector<int>

int main(){
    int t;
    freopen("input.txt","r",stdin);

    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        vint arr(n,0);
        bool f = false;
        for(int i=0;i<n;i++){

           cin>>arr[i];
           int v = sqrt(arr[i]);
           //cout<<v<<" "<<arr[i]<<endl;
           if(v*v != arr[i]) {
               f = true;
           }
        } 
        if(!f)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
