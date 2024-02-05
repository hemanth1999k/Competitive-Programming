#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	freopen("input.txt","r",stdin);
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n<21){
			if(n<21 && n>14)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}else{
			long long x = n/14;
			x--;
			n = n - x*14;
			if(n<21 && n>14)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
			
		}

	
	}
}