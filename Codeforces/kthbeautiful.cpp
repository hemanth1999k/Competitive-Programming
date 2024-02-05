#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	
	int t;
	cin>>t;
	while(t--){
		double n,k;
		cin>>n>>k;
		int s = 1;
		int su = 0;
		while(su+s<k){
			su+=s;
			s++;
		}
		s = n-s-1;
		int rem = n - (k-su-1)-1;
		// cout<<s<<" "<<rem<<endl;
		for(int i=0;i<n;i++){
			if(i==s)
				cout<<'b';
			else if(i==rem)
				cout<<'b';
			else
				cout<<'a';
		}
		cout<<endl;
		
	}
}