#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;i++)
#define FOR1(n) for(int i=1;i<n;i++)
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
	int t;
	cin>>t;
	while(t--){
		ll x,y;
		cin>>x>>y;
		ll mx = max(x,y);
		if(mx%2){
			//odd
			ll v = mx*mx;
			if(y==mx){
				cout<<v - (x-1)<<endl;
			}else{
				cout<<(v-mx+1)-(mx-y)<<endl;
			}
		}else{
			//even
			ll v = mx*mx;
			if(x==mx){
				cout<<v - (y-1)<<endl;
			}else{
				cout<<(v-mx+1)-(mx-x)<<endl;
			}

		}


	}
}
