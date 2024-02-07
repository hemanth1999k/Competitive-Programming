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
#include <cmath>

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
	// freopen("input.txt","r",stdin);
	int t;
	cin>>t;
	
	vint dob;
	FOR(t){
		int x;
		cin>>x;
		dob.PB(x);
	}
	
	sortit(dob);
	if(dob.size()%2){
		ll med = dob[ dob.size()/2];
		ll s1 = 0;
		for(int i=0;i<dob.size();i++){
			s1 += abs(dob[i]-med);
		}
		cout<<s1<<nl;
	}else{
		ll med1 = dob[dob.size()/2];
		ll med2 = dob[dob.size()/2-1];
		ll s1 = 0;ll s2 = 0;
		for(int i=0;i<dob.size();i++){
			s1 += abs(dob[i]-med1);
			s2 += abs(dob[i]-med2);
		}
		cout<<min(s1,s2)<<nl;
	}

}
