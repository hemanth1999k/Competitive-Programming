#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(a<=b){
			cout<<1<<endl;
		}else{
			ll n=a,k=b;
			int mini = 1e9;
			for(int i=1;i<=sqrt(n);i++){
				if(n%i==0){
					int s = n/i;
					// cout<<"s i"<<s<<" "<<i<<endl;
					if(i<=k){
						mini = min(mini,s);
					}
					if(s<=k){
						mini = min(mini,i);
					}
				}
			}
			cout<<mini<<endl;
		}
	}
}