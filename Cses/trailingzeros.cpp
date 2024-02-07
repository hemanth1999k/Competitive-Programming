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
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	int ans = 0;
	for (int i = 5; i <= t; i*=5)
	{
		ans += t/i;
	}
	cout<<ans<<endl;
}
