#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;i++)
#define FOR1(n) for(int i=1;i<n;i++)
#define ll long long 
#define vint vector<int>
#define vlong vector<long long>
#define vstr vector<string>
#define vvin vector<vector<int>>

bool ISPRIME(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	} 
	return true; 
}

using namespace std;
int main(){
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	if((t*(t+1)/2)%2 == 0){
		vector<int> a,b;
		bool x = true;
		a.push_back(t);
		for(int i=t-1;i>=1;i--){
			if(!x){
				a.push_back(i);
				if(i-1>=1)
					a.push_back(--i);
			}else{
				b.push_back(i);
				if(i-1>=1)
					b.push_back(--i);
			}
			x = !x;
		}
		cout<<"YES"<<endl;
		cout<<a.size()<<endl;
		FOR(a.size())cout<<a[i]<<" ";
		cout<<endl;
		cout<<b.size()<<endl;
		FOR(b.size())cout<<b[i]<<" ";
	}
	else{
		cout<<"NO"<<endl;
	}
}
