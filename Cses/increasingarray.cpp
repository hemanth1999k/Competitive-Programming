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
	ll t;
	cin>>t;
	vint arr(t,0);
	FOR(t)cin>>arr[i];
	ll steps = 0;
	FOR1(t){
		steps += max(0,arr[i-1]-arr[i]);
		arr[i] += max(0,arr[i-1]-arr[i]);
	}
	cout<<steps<<endl;
}
