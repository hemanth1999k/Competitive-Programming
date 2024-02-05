#include<bits/stdc++.h>
using namespace std;
#define vint vector<int>
int main(){
    int t;
    freopen("input.txt","r",stdin);

    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vint arr(n,0);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        vint farr;
        farr.push_back(arr[0]^arr[1]);
        farr.push_back(arr[2]^arr[3]);



   }
}
