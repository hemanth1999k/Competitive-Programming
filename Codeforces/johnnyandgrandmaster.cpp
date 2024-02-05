#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mod 1000000007

ll power(ll x,int k){

	ll a = 1;
	
	// ll mod = 7;
	while(k>0){
		if(k&1)
			a = a*x%mod;
		x = (x*x)%mod;
		k = k>>1;
	}
	return a;
}

int main(){
	freopen("input.txt","r",stdin);
	
	int t;
	cin>>t;
	

	
	while(t--){
		ll n,k;
		cin>>n>>k;
		vector<ll> arr(n);
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
			
		}
		sort(arr.begin(),arr.end());
		int curexp = arr[arr.size()-1];

		for(int i=arr.size()-2;i>=0;i--){
			if(curexp>arr[i]){
				int samekcount = 1;
				int curk = arr[i];
				int j = i--;
				int diff = curexp-arr[i];
				int rempow = power(k,diff);
				while(arr[j] == curk && diff > samekcount){
					j--;
					samekcount++;
				}
				
			}
		}
		
		cout<<curdiff%(mod)<<endl;
		
	}
}