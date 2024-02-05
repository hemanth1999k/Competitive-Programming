#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int ar[26];
        int nn = n;
        memset(ar,0,sizeof ar);
        for(;n>0;n--){
            string s;cin>>s;
            for(auto x:s)ar[x-97]++;
        }
        string ans = "Yes";
        for(int i=0;i<26;i++)if(ar[i]%nn!=0){
            ans = "No";break;
            }
        cout<<ans<<endl;
    }
}