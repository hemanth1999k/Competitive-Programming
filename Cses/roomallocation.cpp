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
#define __ <<" "<<
#define ar array
#define sortit(x) sort(x.begin(),x.end())

using namespace std;
template <typename T>
void insert(vector<T> &vec, T x ){
	auto it = lower_bound(vec.begin(),vec.end(),x);
	vec.insert(it,x);
}
bool ISPRIME(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	} 
	return true; 
}
const int mxn = 2e5;
ar<int,3> arr[mxn];
int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt","r",stdin);
	
	int n;
	cin>>n;
	// vector<vector<int>> arr;

	FOR(n){
		cin>>arr[i][1]>>arr[i][0];
		arr[i][2] = i;
		// arr.push_back(vector<int>{a,b,i});
	}
	sort(arr,arr+n);
	set<ar<int,2>> s;
	vint ans(n,0);

	for(int i=0;i<n;i++){
		auto it = s.lower_bound({arr[i][1]});
		if(it!= s.begin()){
			--it;
			ans[arr[i][2]] = (*it)[1];
			s.erase(it);
		}else{
			ans[arr[i][2]] = s.size();
		}
		s.insert({arr[i][0],arr[i][2]});
	}
	cout<<s.size()<<nl;
	FOR(n)
		cout<<ans[i]+1<<" ";
	
}
