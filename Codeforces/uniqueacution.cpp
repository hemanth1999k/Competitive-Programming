#include<bits/stdc++.h>
using namespace std;
int main(){

	int t;
	
	// freopen("input.txt","r",stdin);
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		map<int,int> mp;
		vector<int> users(n);
		for(int i=0;i<n;i++){
			cin>>users[i];
			if( mp.find(users[i]) != mp.end()){
				mp[users[i]] = -1;
			}
			else{
				mp[users[i]] = i;
			}
		}
		int mini = 1e9;
		for(auto p:mp){
			if(p.second != -1 && p.first < mini)
				mini = p.first;
		}
		if(mini == 1e9)
			cout<<-1<<endl;
		else
			cout<<mp[mini]+1<<endl;
	}

}