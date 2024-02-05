#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;++i)
#define FOR1(n) for(int i=1;i<n;++i)
#define ll long long 
#define vint vector<int>
#define vlong vector<long long>
#define vstr vector<string>
#define vvin vector<vector<int>>
#define PB push_back
#define nl "\n"
#define F first
#define S second
#define sortit(x) sort(x.begin(),x.end())
using namespace std;

bool ISPRIME(long long n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    } 
    return true; 
}

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vint arr(n); 
        unordered_map<int,int> mp;
        FOR(n){
            cin>>arr[i];
            mp[arr[i]] = i;
        }
        vint g(arr.begin(),arr.end());
        sortit(g);
        int subs = 1;
        string s= "yes";
        //cout<<g[0]<<" ";
        for(int i=1;i<n;i++){
            int u = g[i]; 
            int ind = mp[u];
            int v = g[i-1]; 
            int pind = mp[v];
            if(pind+1 != ind){
                subs++;
         //       cout<<endl<<u<<" ";
            }
            if(subs>k){
                s ="no";
                break;
            }

        }
        if(subs<k)
            s="yes";
       //cout<<endl;
        //cout<<subs<<" "<<k<<endl;
        cout<<s<<endl;
    }
}
