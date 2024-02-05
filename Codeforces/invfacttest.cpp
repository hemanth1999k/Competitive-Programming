#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;++i)
#define FOR1(n) for(int i=1;i<n;++i)
#define rng(a,b) for(int i=a;i<b;++i)
#define ll long long 
#define vint vector<int>
#define vlong vector<long long>
#define vstr vector<string>
#define vvin vector<vector<int>>
#define PB push_back
#define nl "\n"
#define F first
#define S second
#define __ << " " << 
#define ar array
#define sortit(x) sort(x.begin(),x.end())
#define umap unordered_map
using namespace std;
template <typename T>
void insert(vector<T> &vec, T x ){
    auto it = vec.lower_bound(x);
    vec.insert(it,x);
}
bool ISPRIME(long long n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    } 
    return true; 
}

const int N = 2e5 + 1;
const int MOD = 1e9 + 7;
ll fact[N], inv[N], invfact[N];
void factInverse() {
	fact[0] = inv[1] = fact[1] = invfact[0] = invfact[1] = 1;
	for (long long i = 2; i < N; i++) {
		fact[i] = (fact[i - 1] * i) % MOD;
		inv[i] = MOD - (inv[MOD % i] * (MOD / i) % MOD);
		invfact[i] = (inv[i] * invfact[i - 1]) % MOD;
	}
}
 
int add(int a, int b) {
	if ((a += b) >= MOD)
		a -= MOD;
	else if (a < 0)
		a += MOD;
	return a;
}
 
ll mul(int x, int y) {
	return (1LL * x * y) % MOD;
}
 
ll nCr(int n, int r) {
	if (r > n)
		return 0;
	return mul(mul(fact[n], invfact[r]), invfact[n - r]);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
  //  freopen("input.txt", "r", stdin);
    #else
    #endif
    int t;
    factInverse();
    FOR(100)
        cout<<fact[i]<<" "<<inv[i]<<" "<<invfact[i]<<endl;
    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
    
}


