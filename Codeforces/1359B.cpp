#include<bits/stdc++.h>
using namespace std;

int main(){
	// freopen("input.txt","r",stdin);
		int m,n,x,y;
		char c;
		bool usex = false;
		int t;
		cin>>t;

		while(t--){

			cin>>m>>n>>x>>y;
			usex = false;
			if(2*x < y)
				usex = true;
			
			int cost = 0;
			for(int i=0;i<m;i++){
				string s;
				cin>>s;
				for(int j=0;j<n;j++){
					if(usex){
						if(s[j]=='.')
							cost+= x;
					}else{
						if(s[j]=='.' && j+1<n && s[j+1]=='.'){
							cost+=y;
							j++;
						}
						else if(s[j]=='.'){
							cost+= x;
						}
					}
				}
			}
			cout<<cost<<endl;
		}	
		// cout<<abs(2-x)+abs(2-y)<<endl;

}