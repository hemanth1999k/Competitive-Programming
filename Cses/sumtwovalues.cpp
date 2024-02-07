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
	ios::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	int n,x;
	cin>>n>>x;

	vint a(n,0);
	map<int,int> tm;
	for(int i=0;i<n;i++){
		cin>>a[i];
		
		if( a[i] < x && tm.find(x-a[i])!= tm.end()){
			int bg = tm[x-a[i]];
			cout<<min(i+1,bg)<<" "<<max(i+1,bg)<<nl;
			return 0;
		}
		tm[a[i]] = i+1;
	}
	cout<<"IMPOSSIBLE"<<nl;
}
