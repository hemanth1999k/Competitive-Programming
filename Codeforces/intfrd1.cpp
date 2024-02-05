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
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vlong a(n);
        long d[18][n-1];
        memset(d,0,sizeof d);
        FOR(n) cin>>a[i];

        for(int i=0;i<n-1;i++)
            d[0][i] = abs(a[i] -a[i+1]);
        
        for(int i=1;i<18;i++)
            for(int j=0;j<n-(1<<i);j++)
                d[i][j] = std::gcd(d[i-1][j],d[i-1][j+(1<<(i-1))]);

         for(int i=0;i<18;i++){
            for(int j=0;j<n-1;j++)
                cout<<d[i][j]<<" ";
            cout<<endl;
         }
       
       int ans =1;
       const int inf = 50000000;
       for(int j=0;j<n-1;j++){
            if(d[0][j]==1)continue;
            int cur=j;
            long g=inf;
            for(int i=18-1;i>=0;i--){
                if(cur==n-1)break;
                if(d[i][cur]>=2 && (g==inf||std::gcd(g,d[i][cur])>=2)){
                    if(g==inf)
                        g=d[i][cur];
                    else
                        g=gcd(g,d[i][cur]);
                    cur+=(1<<i);
                }
            }
           ans=max(ans,cur-j+1);
       } 
        cout<<ans<<endl;
    }//
}
