#include<bits/stdc++.h>
using namespace std;

int main(){
    // freopen("input.txt","r",stdin);
    long long int n,t;
    cin>>t;
    while(t--){
        long long int T;
        cin>>n>>T;
        vector<long long  int> arr(n,0);
        vector<bool> colors(n,0);

        map<long long  int,long long  int> mm;
        // int mini = 1e5;
        // int indj = -1;
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(mm.find(arr[i])==mm.end() && mm.find(T-arr[i])==mm.end()){
                mm[arr[i]] = T-arr[i];
            }
        }
        bool alter = false;

        for(int i=0;i<n;i++){
            if(T-arr[i]==arr[i]){
                if(alter)
                    colors[i] = true;
                else
                    colors[i] = false;
                alter = !alter;
            }
            else{
                if(mm.find(arr[i])==mm.end())
                    colors[i]=false;
                else
                    colors[i] = true;
            }
            if(colors[i])
            cout<<1<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
}

