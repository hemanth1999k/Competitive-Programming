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
//	freopen("input.txt","r",stdin);

	int t;
	cin>>t;
	set<ar<int,2>> poss;
	int x;
	cin>>x;	
	vector<ar<int,2>> arr;
	arr.PB({x,-1});
	cout<<0<<" ";
	FOR(t-1){
		cin>>x;
		int j = arr.size()-1;
		while(x<=arr[j][0]){
			j = arr[j][1];
			if(j==-1)break;
		}
		if(j==-1){cout<<0<<" ";
			arr.PB({x,-1}); 
		}		
		else{
			arr.PB({x,j});
			cout<<j+1<<" "; }	
	}		
}

