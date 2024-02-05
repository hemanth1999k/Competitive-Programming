#include <bits/stdc++.h>
using namespace std;
int check(int x,int n){
    
    for(int i=1;i<=x;i++)
        if(x%i==0 && (x/i)<n) return i;
    return x;
}
int main(){
    
    int t;
    freopen("input.txt","r",stdin);
    cin>>t;

    while(t--){
        int n,x,y;cin>>n>>x>>y;
        int d = check(y-x,n);
        // cout<<d<<endl;
        vector<int> ans;
        int count = 0;
        for(int q = x;q<=y;q+=d){
            cout<<q<<" ";
            count++;
        }
        int q = x-d;
        while(count<n && q>0){
            count++;cout<<q<<" ";q=q-d;
        }
        q = y+d;
        while(count<n){
            count++;cout<<q<<" ";q=q+d;
        }
        cout<<endl;
    }
    return 0;
}