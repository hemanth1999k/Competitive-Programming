#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;i++)
#define FOR1(n) for(int i=1;i<n;i++)
bool ISPRIME(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	}
	return true; 
}

using namespace std;
int main(){
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n;
		string ar;
		cin>>n>>ar;
		 
		int d=0,l=0,r=0;
		FOR(n){
			if(ar[i]=='-')
				d++;
			else if(ar[i]=='>') r++;
			else l++;
		}
		if(d==0){
			if(l>0 && r>0) cout<<0<<endl;
			else cout<<max(l,r)<<endl;
		}else{
			if(l==0 && r==0)
				cout<<d<<endl;
			else if( (l>0 && !r) || (!l && r>0) ){
				cout<<n<<endl;
			}
			else{
				int count = 0;
				FOR(n){

					if(ar[i]=='-'){
						int j = i;
						for(;j<n;j++){
							if(ar[j]=='-')
								count++;
							else{ i = j;break;}
						}
						i = j;
						// cout<<i<<" "<<j<<endl;
						if(j == n && ar[0]=='-');
						else count++;
					}
				}
				cout<<count<<endl;
			}
		}
	}
}
