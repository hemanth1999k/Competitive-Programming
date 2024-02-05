#include<bits/stdc++.h>
using namespace std;
#define vint vector<int>
int main(){
    int t;
    freopen("input.txt","r",stdin);

    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vint arr(n,0);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int i=0;i<n-1;i++){
            while(arr[i]>0 && k>0 ){
                arr[i]-=1;
                arr[n-1] += 1;
                k-=1;
            }
        }
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;

   }
}
