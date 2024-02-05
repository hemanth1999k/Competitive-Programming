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
        vint ods;
        vint evens;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2 == 0)
               ods.push_back(arr[i]); 
            else
                evens.push_back(arr[i]);
        }
        for(int i=0;i<ods.size();i++)
            cout<<ods[i]<<" ";

        for(int i=0;i<evens.size();i++)
            cout<<evens[i]<<" ";
        cout<<endl;
   }

}
 
