#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n1;
		cin>>n1;
		vector<int> diff(n1);
		for(int i=0;i<n1;i++)
			cin>>diff[i];

		for(int i=0;i<n1;i++){
			int x;
			cin>>x;
			diff[i] = diff[i]-x;
		}

		if(diff.size()==1){

			if(diff[0]>0)
				cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
		}else{
			int onelife = 1;
			// for(auto x:diff)cout<<x<<" ";
			// 	cout<<endl;
			if(diff[0]!=0)
				onelife = 0;
			
			for(int i=1;i<n1;i++){
				if(diff[i-1]!=diff[i]){
					if(onelife==1)
						onelife--;
					else if(diff[i]!=0){
						onelife = -1;
						break;
					}
				}
				if(diff[i]>0)
				{
					onelife=-1;break;
				}
			}
			if(onelife>=0)cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
}