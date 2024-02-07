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
	string k;
	cin>>k;
	map<char,int> mp;
	for(char x:k){
		mp[x]++;
	}
	char odd=0;
	int ocount = 0;
	for(auto p:mp){
		if(p.second%2==1){
			odd = p.first;
			ocount++;
		}
	}
	if(ocount>1){
		cout<<"NO SOLUTION";
		return 0;
	}

	string s ="";
	for(auto p:mp){
		if(p.first!=odd){
			FOR(p.second/2){
				s+= p.first;
			}
		}
	}
	if(odd!=0)
	FOR(mp[odd])
		s+= odd;
	string rev="";
	for(auto p:mp){
		if(p.first!=odd){
			FOR(p.second/2){
				rev+= p.first;
			}
		}
	}
	for(auto it = rev.rbegin();it!=rev.rend();it++){
		s+= *it;
	}
	cout<<s<<endl;

}
