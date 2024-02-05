#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;i++)
#define FOR1(n) for(int i=1;i<n;i++)
using namespace std;
int main(){

	int t;
	freopen("input.txt","r",stdin);
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> arr(n);
		vector<int> count(n+1,0);
		map<int,set<int>>  mp;
		FOR(n){
			cin>>arr[i];
			count[arr[i]]++;
			if(mp.find(arr[i]) != mp.end())
				mp[arr[i]].insert(i+1);
			else
			{
				mp[arr[i]] = set<int>();
				mp[arr[i]].insert(i+1);
			}
		}
		int minb=1e9;
		for(auto p:mp){
			int initial = 1;
			int subsec = 0;
			for(auto x:p.second){
				if(x-initial>0){
					subsec++;

				}
				initial = x+1;
			}
			if(initial <= n)
				subsec++;
			if(minb>subsec)
			{
				minb = subsec;
			}
		}
		cout<<minb<<endl;
	}
}