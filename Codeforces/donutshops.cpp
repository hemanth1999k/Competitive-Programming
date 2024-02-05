#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		double a,b,c;
		cin>>a>>b>>c;
		int c1=-1,c2=-1;
		// cout<<ceil(1/b)<<endl;
		if(a < ceil(1/b)*c)
			c1 = 1;
		if(b*a > c)
			c2 = b;
		cout<<c1<<" "<<c2<<endl;
	}
}