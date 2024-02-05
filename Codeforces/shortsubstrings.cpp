#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define mod 1000000007
int main(){
	// freopen("input.txt","r",stdin);
	
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		string ss;
		string s0,s1;
		s0 = s[0];
		s1 = s[1];
		ss = s0+s1;
		
		for(int i=3;i<s.size();i+=2){
			ss+=s[i];
		}
		cout<<ss<<endl;
	}
}