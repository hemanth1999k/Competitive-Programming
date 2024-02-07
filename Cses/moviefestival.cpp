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
#define ar array
#define sortit(x) sort(x.begin(),x.end())
using namespace std;

bool ISPRIME(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	} 
	return true; 
}

const int mxn = 2e5;
int n;
ar<int,2> a[mxn];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	// freopen("input.txt","r",stdin);
	
	int t;
	cin>>t;
	for(int i=0;i<t;i++)cin>>a[i][1]>>a[i][0];

	sort(a,a+t);
	int l = 0;
	int ans =0;
	for(int i=0;i<t;i++){
		if(a[i][1] >= l){
			ans++;
			l = a[i][0];
		}
	}
	cout<<ans<<nl;

	// for(int i=0;i<t;i++)
	// 	cout<<a[i][0]<<" "<<a[i][1]<<nl;
}
