#include<bits/stdc++.h>
using namespace std;
#define FOR(n) for(int i=0;i<n;i++)
#define FOR1(n) for(int i=1;i<n;i++)
#define ll long long
#define vint vector<int>
#define vll vector<long long >
#define vstr  vector<string>
bool ISPRIME(long long n){
	for(ll i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	} 
	return true; 
}

int main(){
	freopen("input.txt","r",stdin);

	int t;
	cin>>t;
	
	while(t--){
		ll n;
		cin>>n;
		vll p;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				ll x = n;
				vll temp;
				while((x/i)%i == 0){
					x = x/i;
					temp.push_back(i);
				}
				temp.push_back(x);
				if(temp.size()>p.size())
					p = temp;

			}
		}
		if(p.size()==0){cout<<1<<endl<<n<<endl; continue;}
		cout<<p.size()<<endl;
		for(auto x:p){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}

