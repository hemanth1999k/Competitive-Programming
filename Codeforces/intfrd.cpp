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

int solve(int n,string s,string t){
   bool A[2*1000][2*1000]; 
   bool B[2*1000][2*1000]; 
   int sum=0;
   return sum;
}

template<typename it, typename bin_op>
struct sparse_table{

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt","r",stdin);
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vlong a(n),d(n-1);
        FOR(n)cin>>a[i];
        for(int i=0;i<n-1;i--)
            d[i] = abs(a[i]-a[i+1]);
        sparse_table
    }
}
