#include<bits/stdc++.h>
#define FOR(n) for(int i=0;i<n;++i)
#define FOR1(n) for(int i=1;i<n;++i)
#define ll long long 
#define vint vector<int>
#define vlong vector<long long>
#define vstr vector<string>
#define vvin vector<vector<int>>
#define PB push_back
#define nl "\n"
#define F first
#define S second
#define sortit(x) sort(x.begin(),x.end())
using namespace std;

bool ISPRIME(long long n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return false;
	} 
	return true; 
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll count = 0;
		if(s.size()==1){
			cout<<0<<nl;
			continue;
		}else if(s.size()==2){
			if(s[0]==s[1])
				cout<<1<<nl;
			else cout<<0<<nl;
			continue;
		}
		else
			for(int i=0;i<s.size()-1;i++){
				if(i+4 < s.size() && s[i] == s[i+2] && s[i]==s[i+4] && s[i+1]==s[i+3])
				{
					count+=2;
					i+=3;
				}else if( i+3<s.size() && s[i]==s[i+2] && s[i+1]==s[i+3]){//efef
					count+=2;
					i+=2;
				}
				else if(i+2 < s.size() && s[i]==s[i+2] && s[i]!=s[i+1]){ //aba 
					count++;
					i+= 2;
				}else if(i+2 < s.size() && s[i]==s[i+2] && s[i]==s[i+1]){//aaa
					count+= 2;
					i+= 2;
				}
				else if(s[i]==s[i+1]){ //zzc
					count++;
					i+= 1;
				}
			}
		cout<<count<<nl;
	}
}
