#include<bits/stdc++.h>
#define FOR(s,n) for(int i=s;i<n;i++)
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    int arr[n+1];
    unordered_map<int,int> mp; 
    int s=0; 
    int mx=0;
    int es=0,ee=0;
    mp[0] = 0;
    FOR(1,n+1){
        cin>>arr[i];
        if(arr[i]==1)
            s++;
        else
            s--;
        cout<<s<<" ";
        if(s!=0 && mp[s]==0){
            mp[s]=i;
        }else{
           if(i-mp[s]>mx)
           {
               es = mp[s]+1;
               ee = i;
               mx = i-mp[s];
           }
        }
    }
    cout<<endl;
    if(mx>0)
        cout<<es<<" "<<ee<<endl;
}
