#include <bits/stdc++.h>
using namespace std;
int main(){
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(a<b){
			int c = 2*a;
			c = max(c,b);
			cout<<c*c<<endl;
		}else{
			int c = 2*b;
			c = max(c,a);
			cout<<c*c<<endl;
		}
		
	}
}