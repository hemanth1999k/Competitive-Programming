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
	int t,m;
	cin>>t>>m;
	vint arr;
	map<int,vector<int>> mp;
	FOR(t){
		int x;
		cin>>x;
		arr.PB(x);
		if(mp.find(x)==mp.end()) mp[x] = vector<int>{i};
		else mp[x].PB(i);
	}
	sort(arr.begin(),arr.end());
	vint ans;
	for(int i=0;i<t;i++){
		for(int j=i+1,k=t-1;j<k;j++){
			while(j<k && arr[j]+ arr[k] > m-arr[i])k--;
			if(j<k && arr[j] + arr[k] == m-arr[i]){
				//ans.PB(arr[i]);ans.PB(arr[j]);ans.PB(arr[k]);	
				//cout<<arr[i] __ arr[j] __ arr[k] <<nl;return 0;
				ans.PB(mp[arr[i]][0]+1);
				mp[arr[i]].erase(mp[arr[i]].begin());
				
				ans.PB(mp[arr[j]][0]+1);
				mp[arr[j]].erase(mp[arr[j]].begin());
			
			
				ans.PB(mp[arr[k]][0]+1);
				//cout<<mp[arr[k]][0]<<" ";
				sort(ans.begin(),ans.end());
				for(auto p:ans)
					cout<<p<<" ";
				return 0;
			}
		}
	}	
	cout<<"IMPOSSIBLE"<<nl;				
}

