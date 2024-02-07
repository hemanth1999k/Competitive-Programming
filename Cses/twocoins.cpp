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
		ll a,b;
		cin>>a>>b;
		ll s = (a-b);
		ll y = (a+s)/3;
		ll x = a-2*y;
		// cout<<x<<" "<<y<<endl;
		if(x>=0 && y>=0 && 2*x + y == b && x+2*y==a)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}
}
