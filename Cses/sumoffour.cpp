#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;++i)
#define ll long long 
#define nl "\n"
#define __ << " " << 
#define ar array

using namespace std;

ll t,m;
ll  arr[1000];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
//	freopen("input.txt","r",stdin);
	cin>>t>>m;
	for(int i=0;i<t;i++)
		cin>>arr[i];
	
	unordered_map<int,ar<int,2>> mp;	
	mp.reserve(1<<20);
	for(int i=0;i<t;++i){

		for(int j=i+1;j<t;++j){ 
			if(mp.find(m-arr[i] - arr[j]) != mp.end()){
				ar<int,2> bb = mp[m-arr[i]-arr[j]];
				cout<<i+1<<" "<< j+1<<" "<< bb[0]+1 <<" "<< bb[1]+1<<nl;
				return 0; 
			}	
		}
		for(int j=0;j<i;++j){
			mp[arr[i]+arr[j]] = {i,j};
		}
	}
	cout<<"IMPOSSIBLE"<<nl;

}
