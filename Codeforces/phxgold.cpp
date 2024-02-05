#include<bits/stdc++.h>
using namespace std;
#define vint vector<int>
int main(){
    int t;
    freopen("input.txt","r",stdin);

    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vint arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr.begin(),arr.end());
        vint narr(n,0);
        int sum = 0;
        int j=0;
        int rindex = -1;
        for(int i=0;i<n;i++){
            if(sum + arr[i] == x){
                rindex = i;  
            }else{
                narr[j++] = arr[i];
                sum+= arr[i];
            }
        }
        if(rindex != -1){
            narr[j] = arr[rindex];
            sum+= narr[j];
        }

        if(sum==x)
            cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++)
                cout<<narr[i]<<" ";
            cout<<endl;
        }

    }
}
