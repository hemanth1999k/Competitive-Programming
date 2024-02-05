#include<bits/stdc++.h>
using namespace std;
int main() {
    // freopen("input.txt","r",stdin);
    int n,t;
    cin>>t;
    while(t--){
        int k;
        cin>>n>>k;
        int arr[n];
        int mini = 1e5;
        int indj = -1;
        for(int i=0;i<n;i++){cin>>arr[i];if(arr[i]<mini){mini = arr[i];indj=i;} }
        int count = 0;
        for(int i=0;i<n;i++){
            if(i!=indj){
                if(arr[i]<k)
                    count+= (k-arr[i])/mini;
            }
        }
        cout<<count<<endl;
        
    }
}