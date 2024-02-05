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
	freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	while(t--){
		int x;
		string s;
		cin>>x>>s;
		bool valid2020 = false;
		for(int i=0;i<s.size();i++){
			if(s[i]!='2')
				for(int j=0;j<s.size()-i;j++){
					// cout<<j<<" "<<i<<endl;
					string news = s.substr(0,i) + s.substr(i+j+1);
					if(news=="2020"){
						valid2020 = true;
						break;
					}
				}
			if(valid2020)
				break;
		}
		if(s == "2020")
			valid2020 = true;
		if(valid2020)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
