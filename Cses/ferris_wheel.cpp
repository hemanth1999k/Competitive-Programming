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
	// freopen("input.txt","r",stdin);

	ll n,x;
	cin>>n>>x;

	vint arr;

	FOR(n){
		int t;
		cin>>t;
		arr.push_back(t);
	}
	sortit(arr);
	int j = n-1;
	int ans = 0;
	for(int i=0;i<j;i++){
		while(i<j && arr[i]+arr[j]>x)
			j--;
		if(i>=j)
			break;
		ans++;
		--j;

	}
	cout<<n-ans<<nl;
	// for(auto x:mp){
	// 	cout<<x.F<<" "<<x.S<<nl;
	// }
	return 0;
}
