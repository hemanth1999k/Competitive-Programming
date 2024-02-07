#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;i++)
#define FOR1(n) for(int i=1;i<n;i++)
#define ll unsigned long long 
#define vint vector<int>
#define vlong vector<long long>
#define vstr vector<string>
#define vvin vector<vector<int>>

bool ISPRIME(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	} 
	return true; 
}

using namespace std;
int main(){
	// freopen("input.txt","r",stdin);
	ll t;
	cin>>t;
	ll x = 2;
	vint bin;
	while(x>0){
		bin.push_back(x%2);
		x = x/2;
	}
	ll ans = 1;
	ll mod = 1e9+7;
	for(int i=1;i<=t;i++){
		ans = 2*ans%(mod);
	}
	cout<<ans<<endl;
	// FOR(pows.size())
	// 	cout<<pows[i]<<" "<<bin[i]<<endl;

}
