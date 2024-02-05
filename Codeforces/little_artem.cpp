#include<bits/stdc++.h>
using namespace std;

int main(){
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int a,b;cin>>a>>b;
		cout<<'W';
		for(int j=1;j<b;j++)
			cout<<'B';
		cout<<endl;
		for(int i=1;i<a;i++){
			for(int j=0;j<b;j++)
				cout<<'B';
			cout<<endl;
		}

	}
}