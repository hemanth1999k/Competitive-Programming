#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		if(k>=n){
			cout<<k-n<<endl;
		}else if(k!=0){
			cout<<0<<endl;
		}else{
			if(n%2)
				cout<<1<<endl;
			else cout<<0<<endl;
		}
	}

}