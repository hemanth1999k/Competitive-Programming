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
#define __ << " " << 
#define ar array
#define sortit(x) sort(x.begin(),x.end())

using namespace std;
template <typename T>
void insert(vector<T> &vec, T x ){
	auto it = vec.lower_bound(x);
	vec.insert(it,x);
}
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
	freopen("input.txt","r",stdin);

	int x,k;
	cin>>x>>k;	
	vector<int> arr;
	int count = 0;
	int f=-1,b=-1;
	ll sum = 0;
	FOR(x){
		int p;cin>>p;arr.PB(p);
	};
	while(b+1<x){
		if(sum<k && f+1<x){ sum+= arr[++f];}
		else if(sum==k){ count++; sum-= arr[++b];}
		else if(sum>k && b+1 < x){ sum-= arr[++b];}
		if(f+1==x && sum<k) break;		
	}
	cout<<count<<nl;
}

