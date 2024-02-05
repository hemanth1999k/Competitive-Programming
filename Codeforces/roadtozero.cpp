#include<bits/stdc++.h>
using namespace std;

int main(){
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		long long int x,y;
		cin>>x>>y;
		long long int a,b;
		cin>>a>>b;

		if((x<0 && y<0) ||( x>0 && y>0) ){
			int maxi = max(abs(x),abs(y));
			int mini = min(abs(x),abs(y));
			if(a*2 > b)
				cout<<(maxi-mini)*a+ mini*b<<endl;
			else cout<<(maxi-mini)*a+ mini*a*2<<endl;
		}else{
			cout<<(abs(x)+abs(y))*a<<endl;
		}
	}
}