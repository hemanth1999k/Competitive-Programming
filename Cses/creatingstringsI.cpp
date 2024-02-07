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
	vector<string> ans;
	sort(s.begin(),s.end());
	do{
		ans.push_back(s);
	}while(next_permutation(s.begin(),s.end()));
	cout<<ans.size()<<endl;
	for(string x:ans){
		cout<<x<<endl;
	}
}
