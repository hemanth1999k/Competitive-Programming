#include<bits/stdc++.h>
using namespace std;
#define vint vector<int>
#define FOR(x,n) for(int i=x;i<n;i++)

int main(){
    int t;
    freopen("input.txt","r",stdin);

    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        if(n==1 && m==1)
            if(k==0)
                cout<<"YES"<<endl;
            else 
                cout<<"NO"<<endl;
        else{
            int cost = 0;
            int i=1,j=1;
            while(i<n || j<m){
                if(i<n){
                    i++;
                    cost+=j;
                }
                if(j<m){
                    j++;
                    cost+=i;
                }
    
            }
            if(k==cost)
                cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}
        
