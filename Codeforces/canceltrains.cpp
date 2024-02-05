#include<bits/stdc++.h>
using namespace std;
int main(){

	int t;
	int n,m;
	freopen("input.txt","r",stdin);
	cin>>t;
	while(t--){
		int ans = 0;
		cin>>n>>m;
		map<int,int> mp;
		int x;
		for(int i=0;i<n;i++){
			cin>>x;
			mp[x] = 1;
		}
		for(int j=0;j<m;j++){
			cin>>x;
			if(mp.find(x) != mp.end())
				ans++;
		}
		cout<<ans<<endl;

	}

}