#include<bits/stdc++.h>
using namespace std;

int main(){
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		if(m==0 || n==m ){
			cout<<0<<endl;
			continue;
		}
		int each = n/k;
		if(each>=m){
			cout<<m<<endl;
			continue;
		}else{
			int r= m-each;
			int rem = r%(k-1);
			// cout<<'r'<<r<<" "<<rem<<endl;
			if(r>k-1){
				if(rem>0)
					rem = 1;
				cout<<each - (floor(r/(k-1))+rem)<<endl;
			}
			else if(r>0)
				cout<<each-1<<endl;
			else
				cout<<each<<endl;
		}
	}
}