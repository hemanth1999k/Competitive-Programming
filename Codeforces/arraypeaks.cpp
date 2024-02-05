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
        if(n>=3 && 1+(n-3)/2 < k){
           cout<<-1<<endl; 
        }
        else if(n<3 && k>0)
            cout<<-1<<endl;
        else{
            int arr[n];
            vector<bool> used(n,false);
            memset(arr,0,sizeof arr);
            int s=n;
            for(int i=1;i<k*2;i+=2){
                arr[i] = s; 
                used[s-1] = true;
                s--;
            }
            int j =0; 
            for(int i=0;i<n;i++){
                if(arr[i]==0){
                    while(used[j] == true)j++;
                    arr[i] = j+1;
                    used[j] = true;
                }
            }
            for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";
            cout<<endl;
        }
    }
}
        
 
