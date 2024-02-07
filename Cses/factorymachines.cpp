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
#define __ << " " << 
#define ar array
#define sortit(x) sort(x.begin(),x.end())

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


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	// freopen("input.txt","r",stdin);
	ll n,t;
	cin>>n>>t;
	vlong arr(n);
	FOR(n)
	   cin>>arr[i];

	ll a = 0,b = 1e18,m = 0;
	while(a<b){
		m = (a+b)/2;
		ll s = 0;
		for(int i=0;i<n;i++)
			s += min(m/arr[i],(ll)1e9);
		if(s>=t){
			b = m;
		}
		else{
			a = m+1;
		}
		
	}
	cout<<a<<nl;

}
