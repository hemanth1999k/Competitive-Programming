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
		cin>>n;
		if(n%2==0){
			for(int i=1;i<=n;i+=2){
				cout<<i+1<<" "<<i<<" ";
			}
			cout<<endl;
		}else{
			for(int i=1;i<n-3;i+=2)
				cout<<i+1<<" "<<i<<" ";
			cout<<n-1<<" "<<n<<" "<<n-2<<endl;

		}
	}
}
