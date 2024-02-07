#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;i++)
#define FOR1(n) for(int i=1;i<n;i++)
#define ll long long
#define vint vector<int>
#define vlong vector<long long>
#define vstr vector<string>
#define vvin vector<vector<int>>
using namespace std;

bool ISPRIME(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	} 
	return true; 
}

int main()
{
	// freopen("input.txt","r",stdin);
	ll t;
	cin>>t;
	cout<<t<<" ";
	while(t!=1)
	{
		if(t%2 == 0)
			t = t/2;
		else
			t = t*3+1;
		cout<<t<<" ";
	}
}
