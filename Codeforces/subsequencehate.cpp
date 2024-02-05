#include<bits/stdc++.h>
using namespace std;
int main(){
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;		
		int ones=0,zeros=0;
		for(auto&it:s){
			ones += (it=='1');
			zeros += (it=='0');
		}
		int pones=0,pzeros=0;
		int ans = min(ones,zeros);
		for(auto&it:s){
			pones+=(it=='1'),ones-= (it=='1');
			pzeros+=(it=='0'),zeros -= (it=='0');

			ans = min(ans,pones+zeros);
			ans = min(ans,pzeros+ones);
		}
		cout<<ans<<endl;
	}
}