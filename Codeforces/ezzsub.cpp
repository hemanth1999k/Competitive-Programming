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
        ll n;
        cin>>n;
        vint arr(n);
        double s = 0;
        FOR(n){cin>>arr[i];s+= arr[i];}
        sortit(arr);
         
        double s1 = 0,s2=0;
        double c1=1,c2=n-1;
        s2 = s-arr[0];
        s1 = arr[0];
        double maxv = (s1)/c1 +s2/c2; 
        for(int i=1;i<n;i++){
            s1+= arr[i];
            s2-= arr[i];
            c1++;
            c2--;
            maxv = max(maxv,s1/c1+s2/c2);
        }
        cout<<setprecision(9)<<maxv<<endl;
        

        
       
    }
}
