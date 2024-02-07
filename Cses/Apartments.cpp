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
using namespace std;

bool ISPRIME(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	} 
	return true; 
}
bool search(vint &app,int x,int k){
	int l = 0,r = app.size()-1;
	while(l<=r){
		int mid = (l+r)/2;
		if(app[mid]>(x+k))
			r = mid-1;
		else if(app[mid]<(x-k))
			l = mid+1;
		else if (app[mid]>=(x-k) && app[mid]<=(x+k)){
			app.erase(app.begin()+mid);
			return true;
		}
	}
	return false;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	// freopen("input.txt","r",stdin);
	ll n,m,k;
	cin>>n>>m>>k;
	vint arr,aps;

	int x;
	FOR(n){
		cin>>x;arr.PB(x);
	}
	FOR(m){
		cin>>x;aps.PB(x);
	}
	sort(arr.begin(),arr.end());
	sort(aps.begin(),aps.end());
	int ind = 0;
	int count = 0;
	FOR(n){
		while(ind < m){
			if(arr[i] >= aps[ind]-k && arr[i] <= aps[ind]+k){
				++count;
				++ind;
				break;
			}else if(arr[i] < aps[ind]-k){
				break;
			}else if(arr[i] > aps[ind]+k){
				++ind;
			}
		}
	}
	cout<<count<<nl;
}
