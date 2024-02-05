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
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int n;
		string s;
		cin>>n>>s;
		string res = "";
		int count = 0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='t')
				count++;
			else
				res+= s[i];
		}	
		while(count--){
			res += 't';
		}
		cout<<res<<endl;
	}
}
