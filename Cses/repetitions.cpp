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
	string s;
	cin>>s;
	if(s.size()==1)
		cout<<1;
	else{
		ll maxcount = 0,count = 1;
		for(ll i=1;i<s.size();i++){
			if(s[i] == s[i-1]){
				count++;
			}else{
				maxcount = max(maxcount,count);
				count = 1;
			}
		}
		if(count>0)maxcount  = max(maxcount,count);
		cout<<maxcount<<endl;

	}
}
