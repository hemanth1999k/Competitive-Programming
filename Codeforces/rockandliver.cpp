#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("input.txt","r",stdin);
    int n,t;
    cin>>t;
    while(t--){

        cin>>n;
        long long int x;
        int s = sizeof(long long int)*8+1;
        
        long long int bitcount[s];
        memset(bitcount,0,sizeof bitcount);
        
        for(int i=0;i<n;i++){
            cin>>x;
            int k = floor(log2(x));
            bitcount[k]++;
            // cout<<k<<" ";
        }
        
        long long int sum =0;
        // for(int i=0;i<s;i++)
        //     cout<<bitcount[i]<<" ";

        // cout<<endl;
        
        for(int i=0;i<s;i++){
            if(bitcount[i]>0)
                sum+= bitcount[i]*(bitcount[i]-1)/2;
        }
        cout<<sum<<endl;
        // cout<<endl;
        
    }
}