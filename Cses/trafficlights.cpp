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
#define __ << " " << 
using namespace std;

bool ISPRIME(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	} 
	return true; 
}
template <typename T>
void insert(vector<T> &vec, T x ){
	auto it = vec.lower_bound(x);
	vec.insert(it,x);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	int t,n;
	cin>>n>>t;
	
	set<int> ss;
	ss.insert(0);
	ss.insert(n);
	map<int,int> mp;
	set<int> diffs;
	diffs.insert(n);
	mp[n]++;
	
	while(t--){
		int x;
		cin>>x;
		
		ss.insert(x);

		auto it = ss.find(x);

		--it;
		int bf = *it;
		++it;++it;
		int af = *it;
		--it;
		mp[af-bf]--;
		if(mp[af-bf]==0){
			diffs.erase(diffs.find((af)-(bf)));
		}
		int left = *it - bf;
		int right = af - *it;
		// cout<<left _s right _s nl;
		mp[left]++;
		mp[right]++;
		
		diffs.insert(left);
		diffs.insert(right);
		auto big = diffs.end();
		big--;
		cout<<*big<<" ";	
	}
}
