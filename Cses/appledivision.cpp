#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;++i)
#define FOR1(n) for(int i=1;i<n;++i)
#define ll long long 
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
	int n;
	cin>>n;
	int arr[20];
	ll s=0,ans=1e18;
	for(int i=0;i<n;i++){
		cin>>arr[i],s+=arr[i];
	}
	
	for(int i=0;i<1<<n;i++){
		ll cs = 0;
		ll bs = 0;
		for(int j=0;j<n;j++){
			if(i>>j&1)
				cs += arr[j];
			else 
				bs += arr[j];
		}
		ans = min(ans,abs(cs-bs));
	}

	cout<<ans<<endl;
}
